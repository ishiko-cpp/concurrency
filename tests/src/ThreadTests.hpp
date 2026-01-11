// SPDX-FileCopyrightText: 2000-2026 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#ifndef GUARD_ISHIKO_CPP_CONCURRENCY_TESTS_THREADTESTS_HPP
#define GUARD_ISHIKO_CPP_CONCURRENCY_TESTS_THREADTESTS_HPP

#include <Ishiko/TestFramework/Core.hpp>

class ThreadTests : public Ishiko::TestSequence
{
public:
    ThreadTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
};

#endif
