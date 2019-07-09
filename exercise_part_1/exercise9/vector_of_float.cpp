#include <iostream>
#include <vector>

int main( )
{
	float f = 0.00;
	std::vector< float > vec1;
	std::vector< float > vec2;
	std::vector< float > vec3;

	//vec1.reserve( 25 );
	//vec2.reserve( 25 );
	//vec3.reserve( 25 );

	for( int i = 0; i < 25; ++i ) 
	{
		f = 1.25 + i;
		vec1.push_back( f );
		vec2.push_back( f );
	}

	std::cout << "vec1 result \n";
	for( std::vector< float >::const_iterator itr = vec1.begin(); itr != vec1.end(); ++itr )
		std::cout << *itr << "\n";

	std::cout << "vec2 result \n";
	for( std::vector< float >::const_iterator itr = vec2.begin(); itr != vec2.end(); ++itr )
		std::cout << *itr << "\n";

	for( int i = 0; i < 25; ++i )
	{
		//vec3[ i ] += vec1[ i ] + vec2[ i ];
		f = vec1[ i ] + vec2[ i ];
		vec3.push_back( f );
	}
	std::cout << "vec3 result \n";
	for( std::vector< float >::const_iterator itr = vec3.begin(); itr != vec3.end(); ++itr )
		std::cout << *itr << "\n";


	return 0;
}
