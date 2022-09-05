// Copyright 2021 RobosoftAI Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <smacc2/smacc.hpp>

namespace sm_atomic_hierarchy
{
// STATE DECLARATION
struct StiState1 : smacc2::SmaccState<StiState1, State1>
{
  using SmaccState::SmaccState;

  // TRANSITION TABLE
  typedef mpl::list<


    >reactions;

  // STATE FUNCTIONS
  static void staticConfigure()
  {

  }

  void runtimeConfigure() { RCLCPP_INFO(getLogger(), "Entering StiState1"); }

  void onEntry() { RCLCPP_INFO(getLogger(), "On Entry!"); }

  void onExit() { RCLCPP_INFO(getLogger(), "On Exit!"); }
};
}  // namespace sm_atomic_hierarchy