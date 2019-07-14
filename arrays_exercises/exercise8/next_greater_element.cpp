//
// Write a C++ program to find the next greater element of every element of a given array of integers. Ignore those elements which have no greater element.
//
#include <iostream>
#include <cstdarg>

const int move_index = 2;

int * parse_arguments( char **number )
{
	int *_arr = NULL;
	int arguments = atoi( number[1] );	
	int value = 0;

	_arr = new int [ arguments ];
	for( int i = 0; i < arguments; ++i )
	{
		value = atoi( number[ i + move_index ] );	
		_arr[ i ] = value;
	}	
	return _arr;
}

int main( int argc, char **argv )
{
	int arguments = 0;
	int *_arr = NULL;
	
	int smallest1 = 0;
	int smallest2 = 0;
		
	if( argc < 2 )
	{
		std::cout << "./next_greater_element [ total number arguments  + number of arguments . . .] \n"; 
		return ( -1 );
	}
	arguments = atoi( argv[ 1 ] );
	_arr = parse_arguments( argv );

	/* main algorithm for exercise */	
	for( int i = 0; i < arguments; ++i )
	{
		for( int k = 0; k < arguments; ++k )
		{
			if( _arr[ i ] < _arr[ k ] && ( i < k ))
			{
				std::cout << "element [" << _arr[ i ] << "] --> has greater element [" << _arr[ k ] << "]\n";
				break;
			}	
		}
				
	}
	/* end of algorithm */
	return 0;

}
