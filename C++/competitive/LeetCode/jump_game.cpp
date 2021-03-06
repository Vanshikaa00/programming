// Copyright 2018 Aman Mehara
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

#include <vector>

bool can_jump(const std::vector<int>& numbers) {
    auto current_good_index = numbers.size() - 1;
    for (auto index = numbers.size() - 1; index >= 0; index--) {
        if (index + numbers[index] >= current_good_index) {
            current_good_index = index;
        }
    }
    return current_good_index == 0;
}