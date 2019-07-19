/* 
	Write a program in C to show the basic declaration of pointer. Go to the editor Expected Output :
	Pointer : Show the basic declaration of pointer :
	Here is m=10, n and o are two integer variable and *z is an integer

	z stores the address of m = 0x7ffd40630d44

	*z stores the value of m = 10

	&m is the address of m = 0x7ffd40630d44

	&n stores the address of n = 0x7ffd40630d48

	&o stores the address of o = 0x7ffd40630d4c

	&z stores the address of z = 0x7ffd40630d50

*/
#include <iostream>

int main( int argc, char ** argv )
{
	int m = 10;
	int n = 0;
	int o = 0;

	int *z = &m;	

	std::cout << "z stores the address of m = " << z << "\n";
	std::cout << "*z stores the value of m = " << *z << "\n";
	std::cout << "&m is the address of m = " << &m << "\n";
	std::cout << "&n stores the address of n = " << &n << "\n";	
	std::cout << "&o stores the address of o = " << &o << "\n";
	std::cout << "&z stores the address of z = " << &z << "\n";

	return 0;
}
