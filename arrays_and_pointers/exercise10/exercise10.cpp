/*
	Write a program in C to Calculate the length of the string using a pointer. 
	Go to the editor Test Data : Input a string : w3resource Expected Output :
	The length of the given string w3resource is : 10
*/
#include <iostream>
#include <string>
#include <string.h>

int main()
{
	char p[100];

	memset(p, 0, sizeof(p));

	char *ptr_p = p;

	std::cout << "Input a string : \n";
	std::cin.getline(p, 100);

	for(;;)
	{
		if( *ptr_p == '\0' )
			break;
		else
			ptr_p++;
	}

	std::cout << "The length of the given string " << p << " is : " << ptr_p - p << "\n";
	return ( 0 );

}
