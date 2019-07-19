/*
	Write a program in C to find the maximum number between two numbers using a pointer.
       	Go to the editor Test Data : Input the first number : 5 Input the second number : 6 Expected Output :
*/
#include <iostream>

int findMaximum(int *a, int *b)
{
	if(*a > *b)
	{
		return *a;
	}
	else
		return *b;
}

int main()
{
	int a = 0;
	int b = 0;
	int max = 0;

	std::cout << "input first number \n";
	std::cin >> a;
	std::cout << "input second number \n";
	std::cin >> b;

	max = findMaximum(&a, &b);
	std::cout << max << " is a maximum number \n"; 
	return 0;
}
