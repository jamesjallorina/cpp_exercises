
#include <iostream>

#include "functional.h"


void vprint( )
{
	std::cout << "void vprint( ) " << "\n";
	return;
}	

char cprint(char c)
{
	std::cout << "char cprint( char c ) " << "\n";
	return c;
}

int iprint( int i ) 
{
	std::cout << "int iprint( int i ) " << "\n";
       	return i;	
}

float fprint( float f )
{
	std::cout << "float fprint( float f ) " << "\n";
	return f;
}
