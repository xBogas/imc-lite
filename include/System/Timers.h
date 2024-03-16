#ifndef SYSTEM_TIMERS_H_INCLUDED_
#define SYSTEM_TIMERS_H_INCLUDED_

#include <cstdint>

// Initialize the timer pool callbacks
void init_timer_pool(void);

// Add a callback to the timer pool
void add_callback(void (*callback)(void*), void* args, uint32_t interval, const char* str);

#endif // SYSTEM_TIMERS_H_INCLUDED_