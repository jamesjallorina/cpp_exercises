#include <iostream>
#include <vector>
#include "vector_examples.hpp"


int main(int argc, char **argv)
{
	std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
	//test accumulate integers methods
	int sum = accumulate_integers_case1(v, 0); 
	std::cout << "sum: " << sum <<  std::endl;
	int product = accumulate_integers_case2(v, 1);
	std::cout << "product: " << product << std::endl;

	//test accumulate string methods	
	std::string s = accumulate_string_case1(v, std::to_string(v[0]));
	std::cout << "forward dash fold: " << s << std::endl; 	
	s = accumulate_string_case2(v, std::to_string(v.back())); 
	std::cout << "reverse dash fold: " << s << std::endl;	

	//test adjacent diff methods
	std::vector<int> vi = v;
	std::vector<int>::iterator it;
	it = adjacent_diff_case1(vi);

	std::cout << "adjacent_diff output: ";
	for(const auto& a : vi)
	std::cout << a << " ";	
	std::cout << std::endl;
	return 0;
}
