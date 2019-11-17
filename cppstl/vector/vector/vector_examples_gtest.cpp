// A sample program demonstrating using Google C++ testing framework.

// This sample shows how to write a simple unit test for a function,
// using Google C++ testing framework.
//
// Writing a unit test using Google C++ testing framework is easy as 1-2-3:


// Step 1. Include necessary header files such that the stuff your
// test logic needs is declared.
//
// Don't forget gtest.h, which declares the testing framework.


#include <vector>
#include "vector_examples.hpp"
#include "gtest/gtest.h"

namespace {

TEST(accumulate_integers_case1, handlesInteger_case1){
	std::vector<int> v = { 1, 2, 3, 4 ,5 };
	EXPECT_LT(0,accumulate_integers_case1(v, 0)); 
}

TEST(accumulate_intefers_case2, handlesInteger_case2){
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	EXPECT_LT(0, accumulate_integers_case2(v, 1)); 	
}

TEST(accumulate_string_case1, handlesString_case1){
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::string str = "1-2-3-4-5";	
	EXPECT_EQ(str, accumulate_string_case1(v, std::to_string(v[0])));
}

TEST(accumulate_string_case2, handlesString_case2){
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::string str = "5-4-3-2-1";	
	EXPECT_EQ(str, accumulate_string_case2(v, std::to_string(v.back())));	
}

}

int main(int argc, char **argv) {
 ::testing::InitGoogleTest(&argc, argv);
 return RUN_ALL_TESTS();
}
