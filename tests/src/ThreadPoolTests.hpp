/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/concurrency/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_CONCURRENCY_TESTS_THREADPOOLTESTS_HPP_
#define _ISHIKO_CPP_CONCURRENCY_TESTS_THREADPOOLTESTS_HPP_

#include <Ishiko/TestFramework/Core.hpp>

class ThreadPoolTests : public Ishiko::TestSequence
{
public:
    ThreadPoolTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
};

#endif
