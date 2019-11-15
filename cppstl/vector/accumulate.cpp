#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>

// for testing, my own multiplier function object

template<typename T>
struct multiplier
{
    T operator()(const T& lhs, const T& rhs) const 
    { 
       return lhs * rhs; 
    }
};

int main(int argc, char **argv)
{
    std::vector<int> the_vector = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 };

    int sum = std::accumulate(the_vector.cbegin(), the_vector.cend(), 0); 

    int product = std::accumulate(the_vector.cbegin(), the_vector.cend(), 1, multiplier<int>());

    std::cout << "sum: " << sum << std::endl;
    std::cout << "product: " << product << std::endl;
    return 0;
}
