#include <iostream>
#include <vector>
#include <numeric>


template<typename T>
struct multiplier
{
	T operator()(const T& lhs, const T& rhs)
	{
		return lhs * rhs;
	}
};


template<typename T, typename U>
struct dash_fold
{
	T operator()(T& lhs, U& rhs)
	{
		return std::move(lhs) + "-" + std::to_string(rhs);
	}
};

//template< class InputIt, class T >
//T accumulate( InputIt first, InputIt last, T init );
//(1)
int accumulate_integers_case1(std::vector<int> &vi, int init)
{
	int sum = std::accumulate(vi.begin(), vi.end(), 0);
	return sum;	 
}

int accumulate_integers_case2(std::vector<int> &vi, int init)
{
	int product = std::accumulate(vi.begin(), vi.end(), init, multiplier<int>());	
	return product;
}

std::string accumulate_string_case1(std::vector<int>& vi, std::string init)
{
	std::string s = std::accumulate(vi.begin() + 1, vi.end(), init, dash_fold<std::string, int>());
	return s; 
} 

std::string accumulate_string_case2(std::vector<int>& vi, std::string init)
{
	std::string s = std::accumulate(vi.rbegin() + 1, vi.rend(), init, dash_fold<std::string, int>()); 
	return s;
}

std::vector<int> adjacent_diff_case1(std::vector<int>& vi)
{
	std::adjacent_difference(vi.begin(), vi.end(), vi.begin());
	return vi; 
}
