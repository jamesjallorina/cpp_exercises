/*
	Write a program in C to add two numbers using pointers. Go to the editor Test Data : Input the first number : 5 Input the second number : 6 Expected Output :
	The sum of the entered numbers is : 11
*/
#include <iostream>

int addnumber(int *a, int *b)
{
	return *a + *b;
}

int main( )
{
	int a = 0;
	int b = 0;
	int result = 0;
	std::cout << "Input first number \n";
	std::cin >> a;
	std::cout << "Input second number \n";
	std::cin >> b;
	result = addnumber(&a, &b);
	std::cout << "The sum of the entered numbers is : " << result << "\n";
	return ( 0 );
}
