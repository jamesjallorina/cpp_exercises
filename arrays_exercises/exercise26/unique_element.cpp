//
// Write a C++ program to find the number of pairs of integers in a given array of integers whose sum is equal to a specified number
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
	bool isUnique = true;

	if( argc < 2 )
	{
		std::cout << "./unique_elements [ total number arguments ] [ number of arguments . . . ] \n"; 
		return ( -1 );
	}
	arguments = atoi( argv[ 1 ] );

	_arr = parse_arguments( argv );

	/* main algorithm for exercise */	
	for( int i = 0; i < arguments; ++i )
	{
		for( int x = 0; x < arguments; ++x )
		{
			if( i == x )
				continue;
			if( _arr[ i ] == _arr[ x ] ) 	//skip if it has same element
			{
				isUnique = false;
				break;
			}
		}
		if( isUnique ) 
		std::cout << "element : " << _arr[ i ] << " is unique \n"; 
		isUnique = true;
	}		
	/* end of algorithm */
	return 0;

}
