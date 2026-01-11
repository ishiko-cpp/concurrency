// SPDX-FileCopyrightText: 2000-2026 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#include "ThreadTests.hpp"
#include "Ishiko/Concurrency/Thread.hpp"
#include <Ishiko/BasePlatform.hpp>

using namespace Ishiko;

ThreadTests::ThreadTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "Thread tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("resume test 1", ResumeTest1);
}


#if ISHIKO_OS == ISHIKO_OS_LINUX
static void* ConstructorTest1Test1Helper(void* arg)
{
    return 0;
}
#elif ISHIKO_OS == ISHIKO_OS_WINDOWS
static DWORD ConstructorTest1Test1Helper(void* arg)
{
    return 0;
}
#else
#error Unsupported or unrecognized OS
#endif

void ThreadTests::ConstructorTest1(Test& test)
{
    Thread thread(ConstructorTest1Test1Helper, nullptr);

    // Do not join as this thread is created in a suspended state


    ISHIKO_TEST_PASS();
}

void ThreadTests::ResumeTest1(Test& test)
{
    Thread thread(ConstructorTest1Test1Helper, nullptr);
    thread.resume();
    thread.join();

    ISHIKO_TEST_PASS();
}
