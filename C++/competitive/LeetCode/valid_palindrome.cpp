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

#include <cctype>
#include <string>

bool is_palindrome(const std::string& str) {
    int left_index = 0;
    int right_index = str.size() - 1;

    while (left_index < right_index) {
        while (left_index < right_index && !std::isalnum(str[left_index])) {
            left_index++;
        }
        while (left_index < right_index && !std::isalnum(str[right_index])) {
            right_index--;
        }
        if (left_index < right_index &&
            std::tolower(str[left_index]) != std::tolower(str[right_index])) {
            return false;
        }
        left_index++;
        right_index--;
    }

    return true;
}