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
		std::cout << "./find_smallest [ total number arguments  + number of arguments . . .] \n"; 
		return ( -1 );
	}
	arguments = atoi( argv[ 1 ] );
	_arr = parse_arguments( argv );
	/* main algorithm for exercise 5 */	
	smallest1 = _arr[ 0 ];	//assign first index 
	smallest2 = _arr[ 1 ];	//assign second index
	for( int i = 2; i < arguments; ++i )
	{
		if( smallest1 > _arr[ i ] )
		{
			smallest2 = smallest1;
			smallest1 = _arr[ i ];
		}
	}
	/* end of algorithm */
	std::cout << "first smallest : " << smallest1 << "\n";
	std::cout << "second smallest : " << smallest2 << "\n";
	return 0;

}
