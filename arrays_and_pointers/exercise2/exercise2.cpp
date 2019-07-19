/*
	Write a program in C to demonstrate how to handle the pointers in the program. Go to the editor Expected Output :
	Address of m : 0x7ffcc3ad291c Value of m : 29

	Now ab is assigned with the address of m.
	Address of pointer ab : 0x7ffcc3ad291c
	Content of pointer ab : 29

	The value of m assigned to 34 now.
	Address of pointer ab : 0x7ffcc3ad291c
	Content of pointer ab : 34

	The pointer variable ab is assigned with the value 7 now.
	Address of m : 0x7ffcc3ad291c
	Value of m : 7
*/

#include <iostream>

int main( )
{
	int m = 29;
	int *ab = &m;

	std::cout << "Address of m : " << &m << " Value of m : " << m << "\n";

	m = 34;
	std::cout << "Address of pointer ab : " << ab << "\n";
	std::cout << "Content of pointer ab : " << *ab << "\n";


	*ab = 7;
	std::cout << "Address of m : " << ab << "\n";
	std::cout << "Value of m : " << *ab << "\n";
	return 0;
}
