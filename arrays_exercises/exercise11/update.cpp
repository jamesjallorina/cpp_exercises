//
// Write a C++ program to update every array element by multiplication of next and previous values of a given array of integers
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
	
	if( argc < 2 )
	{
		std::cout << "./missing_element [ total number arguments  + number of arguments . . .] \n"; 
		return ( -1 );
	}
	arguments = atoi( argv[ 1 ] );
	_arr = parse_arguments( argv );

	int new_array[ arguments ] = { 0 };	
	int counter = 0;
	int last_index = arguments - 1;
	/* main algorithm for exercise */	

	
	new_array[ 0 ] = _arr[ 0 ] * _arr[ 1 ]; 
	counter++;
	for( int i = 1; i < arguments; )
	{
		if( i != last_index )
			new_array[ i ] = _arr[ i - 1 ] * _arr[ i + 1 ]; 	
		else
			new_array[ i ] = _arr[ i - 1] * _arr[ i ];
		counter = ++i;
	}

	for( int i = 0; i < counter; ++i )
	{
		std::cout << new_array[ i ] << "\n";
	}	
	/* end of algorithm */
	return 0;

}
