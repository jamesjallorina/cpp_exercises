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

template<typename T, typename U>
struct dash_fold
{
    T operator()(T& lhs, U& rhs) const
    {
        return std::move(lhs) + "-" + std::to_string(rhs);
    }
};

int main(int argc, char **argv)
{
    std::vector<int> the_vector = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 };

    int sum = std::accumulate(the_vector.cbegin(), the_vector.cend(), 0); 

    int product = std::accumulate(the_vector.cbegin(), the_vector.cend(), 1, multiplier<int>());

    
    std::string numdash = std::accumulate(std::next(the_vector.begin()), the_vector.end(),
                        std::to_string(the_vector[0]),
                        dash_fold<std::string, int>());

    std::string revdash = std::accumulate(std::next(the_vector.rbegin()), the_vector.rend(),
                        std::to_string(the_vector.back()),
                        dash_fold<std::string, int>());

    std::cout << "sum: " << sum << std::endl;
    std::cout << "product: " << product << std::endl;
    std::cout << "numdash: " << numdash << std::endl;
    std::cout << "revdash: " << revdash << std::endl;


    return 0;
}
