/*
	Write a program in C to demonstrate the use of &(address of) and *(value at address) operator. Go to the editor Expected Output :
	Pointer : Demonstrate the use of & and * operator :

	m = 300
	fx = 300.600006
	cht = z

	Using & operator :

	address of m = 0x7ffda2eeeec8
	address of fx = 0x7ffda2eeeecc
	address of cht = 0x7ffda2eeeec7

	Using & and * operator :

	value at address of m = 300
	value at address of fx = 300.600006
	value at address of cht = z

	Using only pointer variable :

	address of m = 0x7ffda2eeeec8
	address of fx = 0x7ffda2eeeecc
	address of cht = 0x7ffda2eeeec7

	Using only pointer operator :

	value at address of m = 300
	value at address of fx= 300.600006
	value at address of cht= z
*/
#include <iostream>
#include <ostream>
#include <stdlib.h>
#include <string.h>

/* show an example to newcomer that cout object can be overloaded to be compatible with address of char &cht */
std::ostream &operator << (std::ostream &out, char *p)
{
	char hex[20];
	memset(hex, 0, sizeof(hex));

	sprintf(hex, "%p", p);
	std::string hexp = hex;
	out << hexp;
	return out;
}	

int main()
{
	int 	m 	= 300;
	float 	fx 	= 300.600006;
	char 	cht 	= 'z';

	std::cout << "address of m = " << &m << "\n";
	std::cout << "address of fx = " << &fx << "\n";
	std::cout << "address of cht = " << &cht << "\n";

	int *ptr_m = &m;
	float *ptr_fx = &fx;
	char *ptr_cht = &cht;

	std::cout << "value at address m = " << m <<"\n";
      	std::cout << "value at address fx = " << fx <<"\n";
	std::cout << "value at address cht = " << cht <<"\n";

	std::cout << "address of m = " << ptr_m <<"\n";
	std::cout << "address of fx = " << ptr_fx <<"\n";
	std::cout << "address of cht = " << ptr_cht <<"\n";

	std::cout << "value at address of m = " << *ptr_m <<"\n";
	std::cout << "value at address of fx = " << *ptr_fx <<"\n";
	std::cout << "value at address of cht = " << *ptr_cht <<"\n";
	
	return 0;	
}
