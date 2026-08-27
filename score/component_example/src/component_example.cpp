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

namespace score {
namespace component_example {

Counter::Counter(std::int32_t initial_value) : value_{initial_value} {}

void Counter::increment() {
    ++value_;
}

void Counter::decrement() {
    --value_;
}

void Counter::reset() {
    value_ = 0;
}

std::int32_t Counter::get_value() const {
    return value_;
}

}  // namespace component_example
}  // namespace score
