#ifndef VECTOR_EXAMPLES_GTEST_HPP_
#define VECTOR_EXAMPLES_GTEST_HPP_

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

// TEST ACCUMULATE 
int accumulate_integers_case1(std::vector<int> &vi, int init);
int accumulate_integers_case2(std::vector<int> &vi, int init);
std::string accumulate_string_case1(std::vector<int>& vi, std::string init);
std::string accumulate_string_case2(std::vector<int>& vi, std::string init);

// TEST ADJACENT DIFFERENCE
std::vector<int> adjacent_diff_case1(std::vector<int>& vi);

#endif //VECTOR_EXAMPLES_GTEST_HPP_
