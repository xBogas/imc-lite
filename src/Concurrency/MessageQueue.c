// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "Concurrency/MessageQueue.h"

_BEGIN_STD_C

void mq_init(struct mq* mq, u32 size)
{
	ASSERT_ERR(mq != NULL, "Message queue is NULL");

	mq->msg_q = queue_create(size);
	mq->cv = cond_create();
}

struct mq* mq_create(u32 size)
{
	struct mq* mq = (struct mq*)malloc(sizeof(struct mq));
	ASSERT_ERR(mq != NULL, "Failed to allocate memory for message queue");
	mq_init(mq, size);

	return mq;
}

void mq_destroy(struct mq* mq)
{
	ASSERT_ERR(mq != NULL, "Message queue is NULL");

	queue_destroy(mq->msg_q);
	free(mq);
}

void mq_push(struct mq* mq, void* data)
{
	ASSERT_ERR(mq != NULL, "Message queue is NULL");

	queue_err_t err = queue_push(mq->msg_q, data);
	while (err == QUEUE_ERR_FULL) {
		if (!cond_signal_all(mq->cv))
			yield();

		err = queue_push(mq->msg_q, data);
	}

	cond_signal_all(mq->cv);
}

mq_err_t mq_try_push(struct mq* mq, void* data)
{
	ASSERT_ERR(mq != NULL, "Message queue is NULL");

	queue_err_t err = queue_push(mq->msg_q, data);
	if (err == QUEUE_ERR_NONE)
		cond_signal_all(mq->cv);

	return err;
}

void* mq_pop(struct mq* mq)
{
	ASSERT_ERR(mq != NULL, "Message queue is NULL");

	void* data = queue_pop(mq->msg_q);
	while (data == NULL) {
		cond_wait(mq->cv);
		data = queue_pop(mq->msg_q);
	}

	return data;
}

void* mq_pop_timeout(struct mq* mq, u32 ms)
{
	ASSERT_ERR(mq != NULL, "Message queue is NULL");

	if (ms == 0)
		return mq_pop(mq);

	void* data = queue_pop(mq->msg_q);
	while (data == NULL) {
		if (!cond_wait_timeout(mq->cv, ms))
			return NULL;

		data = queue_pop(mq->msg_q);
	}

	return data;
}

void* mq_try_pop(struct mq* mq)
{
	ASSERT_ERR(mq != NULL, "Message queue is NULL");

	return queue_pop(mq->msg_q);
}

_END_STD_C