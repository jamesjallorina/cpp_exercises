//: C02:Fillvector.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

int main( ) 
{
	std::vector< std::string > v;
	std::ifstream in("Fillvector.cpp");
	std::string line;
	while( std::getline( in, line ) )
		v.push_back(line); // Add the line to the end
	
	// Add line numbers:
	//for(int i = v.size(); i != 0; --i)
	//cout << i << ": " << v[i] << endl;
	int i = v.size();
	for( std::vector< std::string >::const_reverse_iterator itr = v.rbegin(); itr != v.rend(); ++itr, --i )
		std::cout << i << ": " << *itr << "\n"; 
} ///:~
