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
#ifndef SCORE_LIB_COMPONENT_EXAMPLE_COMPONENT_EXAMPLE_HPP
#define SCORE_LIB_COMPONENT_EXAMPLE_COMPONENT_EXAMPLE_HPP

#include <cstdint>

namespace score {
namespace component_example {

/// \brief A simple counter demonstrating component structure and conventions.
class Counter final {
  public:
    explicit Counter(std::int32_t initial_value = 0);

    void increment();
    void decrement();
    void reset();

    std::int32_t get_value() const;

  private:
    std::int32_t value_;
};

}  // namespace component_example
}  // namespace score

#endif  // SCORE_LIB_COMPONENT_EXAMPLE_COMPONENT_EXAMPLE_HPP
