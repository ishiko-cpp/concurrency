// SPDX-FileCopyrightText: 2000-2025 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#ifndef GUARD_ISHIKO_CPP_CONCURRENCY_WINDOWS_THREAD_HPP
#define GUARD_ISHIKO_CPP_CONCURRENCY_WINDOWS_THREAD_HPP

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

namespace Ishiko
{
    class Thread
    {
    public:
        Thread(LPTHREAD_START_ROUTINE function, void* param);
        void close();
        void resume();
        void suspend();
        void join();

    private:
        HANDLE m_handle;
    };
}

#endif
