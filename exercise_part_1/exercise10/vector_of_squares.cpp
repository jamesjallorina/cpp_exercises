#include <iostream>
#include <vector>

int main( )
{
	std::vector< int > entries;

	for( int i = 0; i < 25; ++i )
		entries.push_back( i );

	std::cout << "values before squares of vector \n";
	for( std::vector< int >::const_iterator itr = entries.begin(); itr != entries.end(); ++itr )
		std::cout << *itr << "\n";
	
	
	for( std::vector< int >::iterator itr = entries.begin(); itr != entries.end(); ++itr )
		*itr = *itr * *itr;

	std::cout << "vector after squares of vector \n";
	for( std::vector< int >::const_iterator itr = entries.begin(); itr != entries.end(); ++itr )
		std::cout << *itr << "\n";

	return 0;
}
