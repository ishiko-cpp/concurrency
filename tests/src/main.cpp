/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/concurrency/blob/main/LICENSE.txt
*/

#include "ThreadPoolTests.hpp"
#include "Ishiko/Concurrency/linkoptions.hpp"
#include <Ishiko/TestFramework/Core.hpp>

using namespace Ishiko;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoConcurrency");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<ThreadPoolTests>();

    return theTestHarness.run();
}
