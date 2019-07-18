//
// Write a C++ program to find the number of pairs of integers in a given array of integers whose sum is equal to a specified number
//
#include <iostream>
#include <cstdarg>

const int move_index = 3;

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
	
	int sum = 0;	
	int counter = 0;

	if( argc < 2 )
	{
		std::cout << "./pair_of_number [ total number arguments ] [ integer value ] [ number of arguments . . . ] \n"; 
		return ( -1 );
	}
	arguments = atoi( argv[ 1 ] );
	sum = atoi( argv[ 2 ] );	

	_arr = parse_arguments( argv );

	/* main algorithm for exercise */	
	for( int i = 0; i < arguments; ++i )
	{
		for( int x = i; x < arguments; ++x )
		{
			if( i == x )
			continue;	//skip if same index

			if( _arr[ i ] + _arr[ x ]  == sum )
			{
				std::cout << _arr[ i ] << " + " << _arr[ x ] << " = " << sum << "\n";			
				counter++;
			}
		}
	}
	std::cout << "There are a total number : " << counter << " of pairs of integers whose equal to sum : " << sum << "\n";
	/* end of algorithm */
	return 0;

}
