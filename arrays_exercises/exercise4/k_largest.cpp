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
	int num_elements = 0;
	int *_arr = NULL;
	
		
	if( argc < 2 )
	{
		std::cout << "./find_largest [ total number arguments ] [ number of largest elements to show ] [  integer arguments . . . ] \n"; 
		return ( -1 );
	}
	arguments = atoi( argv[ 1 ] );
	_arr = parse_arguments( argv );
	num_elements = atoi( argv[ 2 ] );
	int list_largest[ num_elements ] = { 0 };
	int save_head = 0;
	int save_current = 0;
	/* main algorithm for exercise 1 */	
	for( int i = 0; i < arguments; ++i )
	{
		/* check if the first largest is less than the current index */
		if( list_largest[ 0 ] < _arr[ i ] )
		{
			save_head = list_largest[ 0 ];
			list_largest[ 0 ] = _arr[ i ];
			for( int x = 1; x < num_elements; ++x )
			{
				save_current = list_largest[ x ]; // x = 1 
				list_largest[ x ] = save_head;    // x = 1	
				save_head = save_current;
			}	
		}

	}

	for( int k = 0; k < num_elements; ++k )
		std::cout << list_largest[ k ] << "\n";
	/* end of algorithm */
	return 0;

}
