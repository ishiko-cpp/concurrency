/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/concurrency/blob/main/LICENSE.txt
*/

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
