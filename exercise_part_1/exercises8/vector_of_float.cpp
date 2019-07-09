#include <iostream>
#include <vector>

int main( )
{
	float f = 0.00;
	std::vector< float > vec;
	vec.reserve( 25 );

	for( int i = 0; i < 25; ++i ) 
	{
		f = 1.25 + i;
		vec.push_back( f );
	}

	for( std::vector< float >::const_iterator itr = vec.begin(); itr != vec.end(); ++itr )
		std::cout << *itr << "\n";

	return 0;
}
