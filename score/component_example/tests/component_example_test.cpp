/********************************************************************************
 * Copyright (c) 2026 Contributors to the Eclipse Foundation
 *
 * See the NOTICE file(s) distributed with this work for additional
 * information regarding copyright ownership.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Apache License Version 2.0 which is available at
 * https://www.apache.org/licenses/LICENSE-2.0
 *
 * SPDX-License-Identifier: Apache-2.0
 ********************************************************************************/
#include "score/component_example/src/component_example.hpp"

#include <gtest/gtest.h>

namespace score {
namespace component_example {
namespace {

TEST(CounterTest, DefaultConstructorStartsAtZero) {
    Counter counter;
    EXPECT_EQ(counter.get_value(), 0);
}

TEST(CounterTest, ConstructorWithInitialValue) {
    Counter counter{42};
    EXPECT_EQ(counter.get_value(), 42);
}

TEST(CounterTest, IncrementIncreasesValue) {
    Counter counter;
    counter.increment();
    counter.increment();
    EXPECT_EQ(counter.get_value(), 2);
}

TEST(CounterTest, DecrementDecreasesValue) {
    Counter counter{5};
    counter.decrement();
    EXPECT_EQ(counter.get_value(), 4);
}

TEST(CounterTest, ResetSetsValueToZero) {
    Counter counter{10};
    counter.reset();
    EXPECT_EQ(counter.get_value(), 0);
}

}  // namespace
}  // namespace component_example
}  // namespace score
