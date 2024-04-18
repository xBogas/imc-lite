// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef CONCURRENCY_MESSAGE_QUEUE_H_INCLUDED_
#define CONCURRENCY_MESSAGE_QUEUE_H_INCLUDED_

#include "Concurrency.h"
#include "Defines.h"
#include "Structures.h"

_BEGIN_STD_C

typedef u8 mq_err_t;

enum mq_err {
	MQ_ERR_NONE = 0,
	MQ_ERR_FULL,
	MQ_ERR_EMPTY,
};

struct msg {
	void* data;
};

/// @brief Message queue structure.
struct mq {
	struct queue* msg_q;
	struct cond* cv;
};

/// @brief Create a new message queue.
/// @param size Size of the message queue.
/// @return The new message queue.
struct mq* mq_create(u32 size);

/// @brief Initialize a message queue.
/// @param mq Message queue to be initialized.
/// @param size Size of the message queue.
void mq_init(struct mq* mq, u32 size);

/// @brief Destroy a message queue.
/// @param mq Message queue to be destroyed.
void mq_destroy(struct mq* mq);

/// @brief Push a message to the message queue. If the queue is full, the
/// function will block until there is space available.
/// @param mq Message queue to push the message to.
/// @param data Data to be pushed to the message queue.
void mq_push(struct mq* mq, void* data);

/// @brief Try to push a message to the message queue. If the queue is full,
/// the function will return false.
/// @param mq Message queue to push the message to.
mq_err_t mq_try_push(struct mq* mq, void* data);

/// @brief Pop a message from the message queue. If the queue is empty, the
/// function will block until there is a message available.
/// @param mq Message queue to pop the message from.
void* mq_pop(struct mq* mq);

/// @brief Try to pop a message from the message queue.
/// @param mq Message queue to pop the message from.
/// @param ms Timeout in milliseconds.
/// @return The message popped from the message queue or NULL if the timeout
void* mq_pop_timeout(struct mq* mq, u32 ms);

/// @brief Try to pop a message from the message queue.
/// @param mq Message queue to pop the message from.
/// @return True if a message was popped, false otherwise.
void* mq_try_pop(struct mq* mq);

/// @brief Get the number of messages in the message queue.
/// @param mq Message queue to get the number of messages from.
/// @return Number of messages in the message queue.
static inline u32 mq_size(struct mq* mq)
{
	return queue_size(mq->msg_q);
}

_END_STD_C

#endif // CONCURRENCY_MESSAGE_QUEUE_H_INCLUDED_