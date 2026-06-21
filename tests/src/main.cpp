// SPDX-FileCopyrightText: 2000-2026 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#include "ThreadPoolTests.hpp"
#include "ThreadTests.hpp"
#include "Ishiko/Concurrency/linkoptions.hpp"
#include <Ishiko/TestFramework/Core.hpp>

using namespace Ishiko;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoConcurrency");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<ThreadTests>();
    theTests.append<ThreadPoolTests>();

    return theTestHarness.run();
}
