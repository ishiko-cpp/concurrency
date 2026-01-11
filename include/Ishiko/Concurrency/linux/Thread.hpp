// SPDX-FileCopyrightText: 2000-2026 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#ifndef GUARD_ISHIKO_CPP_CONCURRENCY_LINUX_THREAD_HPP
#define GUARD_ISHIKO_CPP_CONCURRENCY_LINUX_THREAD_HPP

#include <pthread.h>

namespace Ishiko
{
    class Thread
    {
    public:
        Thread(void* (*function)(void*), void* param);

    private:
        pthread_t m_handle;
    };
}

#endif
