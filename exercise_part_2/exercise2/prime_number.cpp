#include <iostream>
#include <vector>


std::vector< int > detect_prime_numbers( const unsigned int number )
{
	std::vector< int > entries;
	bool isPrimeNumber = false; 
	for( int i = 1; i <= number; ++i )
	{
		if( i == 1 ) continue;
		isPrimeNumber = true;
		for( int k = 1; k < i; ++k )
		{
			if( k == 1 ) continue;
			if( k == i ) break;	

			if( ( i % k ) == 0 ) 
				isPrimeNumber = false;
		}
		if( isPrimeNumber )
			entries.push_back( i );
	}
	return entries;
}


int main( int argc, char **argv )
{
	unsigned int number = 0;
	std::vector< int > prime_numbers;	
	if( argc < 2 )
	{
		std::cout << "prime_number [ number ] " << "\n";
		return ( -1 );
	}
	number = atoi( argv[ 1 ] );

	prime_numbers = detect_prime_numbers( number );

	std::cout << "prime numbers are: \n";
	for( std::vector< int >::const_iterator itr = prime_numbers.begin(); itr != prime_numbers.end(); ++itr )
		std::cout << *itr << "\n";
	return ( 0 );
}
