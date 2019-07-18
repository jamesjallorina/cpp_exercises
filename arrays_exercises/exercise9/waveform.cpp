//
// Write a C++ program to sort a given unsorted array of integers, in wave form. Note: An array is in wave form when array[0] >= array[1] <= array[2] >= array[3] <= array[//4] >= . . . .
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

int first_smallest_index = 0;
int second_smallest_index = 0;

int form( int _arr[], int waveform[], int arguments, int index )
{
	int first_smallest = _arr[ 0 ] ;
	first_smallest_index = 0;
	int second_smallest = _arr[ 1 ];
	second_smallest_index = 1;
	for( int i = 1; i < arguments; i++ )
	{
		if( first_smallest > _arr[ i ] )
		{
			second_smallest_index = first_smallest_index;
			first_smallest_index = i;

			second_smallest = first_smallest;
			first_smallest = _arr[ i ];	
			
		}
		else if( second_smallest > _arr[ i ] )
		{
			second_smallest = _arr[ i ];
			second_smallest_index = i;
		}
			
	}
	waveform[ index++ ] = second_smallest;
	waveform[ index++ ] = first_smallest;
	return index;
}

void adjust_values( int _arr[], int new_array[], int arguments )
{
	for( int i = 0, k = 0; i < arguments; ++i )
	{
		if(first_smallest_index == i || second_smallest_index == i )
			continue;
		new_array[ k++ ] = _arr[ i ];	
	}
	return;
}


int main( int argc, char **argv )
{
	int arguments = 0;
	int *_arr = NULL;
	
	if( argc < 2 )
	{
		std::cout << "./waveform [ total number arguments  + number of arguments . . .] \n"; 
		return ( -1 );
	}
	arguments = atoi( argv[ 1 ] );
	_arr = parse_arguments( argv );

	/* main algorithm for exercise */	
	int new_arguments = arguments;
	int new_array[ arguments ] = { 0 };
	int waveform[ arguments ] = { 0 };
	int current_index = 0;

	while( true )
	{	
		current_index = form( _arr, waveform, new_arguments, current_index ); 	
		adjust_values( _arr, _arr, new_arguments );	
		new_arguments -= 2; 

		if(current_index > arguments )
			break;
	}	

	std::cout << "waveform " << "\n";
	for( int i = 0; i < arguments; ++i )
		std::cout << waveform[ i ] << "\n";

	/* end of algorithm */
	return 0;

}
