//
// Write a C++ program to find the most occurring element in an array of integers.
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
		std::cout << "./most_occuring [ total number arguments  + number of arguments . . .] \n"; 
		return ( -1 );
	}
	arguments = atoi( argv[ 1 ] );
	_arr = parse_arguments( argv );
	int counter = 0;
	int saved_counter = 0;
	int most_occuring = 0;

	/* main algorithm for exercise */	
	for( int i = 0; i < arguments; ++i )
	{
		counter = 0;
		for( int k = 0; k < arguments; ++k )
		{
			if( _arr[ i ] == _arr[ k ] )
				counter++;		
	
			if( saved_counter < counter )
			{
				most_occuring = _arr[ i ];
				saved_counter = counter;
			}
		}
				
	}
	/* end of algorithm */
	std::cout << "most occuring is : " << most_occuring << "\n";
	return 0;

}
