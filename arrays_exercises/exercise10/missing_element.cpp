//
// Write a C++ program to find the smallest element missing in a sorted array.
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
	
	int smallest = 0;
	/* main algorithm for exercise */	
	for( int i = 0; i < arguments; ++i )
	{
		//std::cout << "value of i \n" << i << "\n";	
		if( i == 0 )
		{
			if( _arr[ i ] == 0 ) { }
			else
			{
				smallest = 0;
				break;
			}
		}
		if( _arr[ i ] + 1 != _arr[ i + 1] )
		{
			//std::cout << "is equal to _arr[ " << i << " ] " << " + " << " + 1 \n";
			smallest = _arr[ i ] + 1;
			break;
		}
	}
	std::cout << "smallest missing element : " << smallest << "\n";
	/* end of algorithm */
	return 0;

}
