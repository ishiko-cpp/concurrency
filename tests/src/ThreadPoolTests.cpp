// SPDX-FileCopyrightText: 2000-2026 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#include "ThreadPoolTests.hpp"
#include "Ishiko/Concurrency/ThreadPool.hpp"

using namespace Ishiko;

ThreadPoolTests::ThreadPoolTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "ThreadPool tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void ThreadPoolTests::ConstructorTest1(Test& test)
{
    ThreadPool threadPool;

    ISHIKO_TEST_PASS();
}
