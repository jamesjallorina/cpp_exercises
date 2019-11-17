#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>


int main(int argvc, char **argv)
{

	std::vector<int> the_vector = {1, 2, 3, 3, 5, 6, 7, 8, 9, 10 };

	std::vector<int>::iterator the_iterator;

	the_iterator = std::adjacent_find(the_vector.begin(), the_vector.end());
	if(the_iterator != the_vector.end()){
		std::cout << "first identical: " << *the_iterator << std::endl;
		std::cout << "second identical: "<< *(the_iterator+1) << std::endl;
	}else{
		std::cout << "none identical elements " << std::endl;
	}
	return 0;
}