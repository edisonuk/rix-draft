#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <thread.h>

/**
 * @brief
 * Executes another thread. It simply picks the next thread
 * from the queue and executes it.
 */
void
thread_reschedule(void);

/**
 * @brief
 * Stop execution of the current thread and give up
 * the cpu to other waiting threads of the same priority.
 * 
 * If there is not thread in the waiting queue with same priority
 * then the current thread would continue its execution.
 */
void
thread_yield(void);

/**
 * @brief
 * Block the current running thread.
 * 
 * The function doesn't return until the thread is unblocked
 * by some other module.
 */
void
thread_block(void);

/**
 * @brief
 * Unblock the specified thread.
 */
void
thread_unblock(_in_ thread_t *t);

#endif /* SCHEDULER_H */