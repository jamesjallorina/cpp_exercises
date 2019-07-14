//
// Write a C++ program to find all elements in array of integers which have at-least two greater elements.
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
		std::cout << "./find_greater_elements [ total number arguments  + number of arguments . . .] \n"; 
		return ( -1 );
	}
	arguments = atoi( argv[ 1 ] );
	_arr = parse_arguments( argv );
	int counter = 0;
	/* main algorithm for exercise */	
	for( int i = 0; i < arguments; ++i )
	{
		counter = 0;
		for( int k = 0; k < arguments; ++k )
		{
			if( _arr[ i ] < _arr[ k ] )
				counter++;		

			if( counter == 2 )
			{
				std::cout <<  _arr[ i ] << "\n";
				break;
			}
		}
				
	}
	/* end of algorithm */
	return 0;

}
