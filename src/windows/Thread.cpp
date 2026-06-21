// SPDX-FileCopyrightText: 2000-2026 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#include "windows/Thread.hpp"

using namespace Ishiko;

Thread::Thread(LPTHREAD_START_ROUTINE function, 
               void* param)
{
    m_handle = CreateThread(NULL, 0, function, param, CREATE_SUSPENDED, 0);
}

void Thread::close()
{
    CloseHandle(m_handle);
}

void Thread::resume()
{
    ResumeThread(m_handle);
}

void Thread::suspend()
{
    SuspendThread(m_handle);
}

void Thread::join()
{
    WaitForSingleObject(m_handle, INFINITE);
}
