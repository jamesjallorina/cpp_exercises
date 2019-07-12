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
	
	int largest = 0;
	if( argc < 2 )
	{
		std::cout << "./find_largest [ total number arguments +  integer arguments . . . ] \n"; 
		return ( -1 );
	}
	arguments = atoi( argv[ 1 ] );
	_arr = parse_arguments( argv );
	largest = _arr[ 0 ];

	/* main algorithm for exercise 1 */	
	for( int i = 0; i < arguments; ++i )
	{
		if( largest < _arr[ i ] )
			largest = _arr[ i ];
	}
	std::cout << "largest value in the array is : " << largest << "\n";
	/* end of algorithm */
	return 0;

}
