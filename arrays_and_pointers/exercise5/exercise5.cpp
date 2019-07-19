/*
	Write a program in C to add numbers using call by reference. 
	Go to the editor Test Data : Input the first number : 5 Input the second number : 6 Expected Output :
*/
#include <iostream>

void addnumber(int *a, int *b, int *result)
{
	*result = *a + *b;
	return;
}

int main()
{
	int a = 0;
	int b = 0;
	int result = 0;

	std::cout << "input first number \n";
	std::cin >> a;
	std::cout << "input second number \n";
	std::cin >> b;

	addnumber(&a, &b, &result);
	std::cout << "The sum of " << a << " and " << b << " is " << result << "\n";
	return 0;
}
