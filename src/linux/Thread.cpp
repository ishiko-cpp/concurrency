// SPDX-FileCopyrightText: 2000-2026 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#include "linux/Thread.hpp"

using namespace Ishiko;

Thread::Thread(void* (*function)(void*), void* param)
{
     // TODO: handle failure
     pthread_create(&m_handle, NULL, function, &param);
}
