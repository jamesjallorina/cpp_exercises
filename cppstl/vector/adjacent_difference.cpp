#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>


int main(int argc, char **argv)
{
    std::vector<int> the_vector = { 1, 2, 3, 4, 5 ,6, 7, 8, 9, 10 };
    
    std::vector<int>::iterator res; 

    adjacent_difference(the_vector.begin(), the_vector.end(), the_vector.begin()); 

    for(const auto &res : the_vector)
        std::cout << res << " " << std::endl;

    return 0;
}
