#include <iostream>

const double PI = 3.14159;

int main( )
{
	double radius = 0.0;
	std::cout << "enter radius of circle: \n";
	std::cin >> radius;
	std::cout << "area of circle: \n" << PI * (radius * radius) << "\n";
	return 0;
}
