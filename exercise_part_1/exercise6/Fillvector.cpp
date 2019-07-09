//: C02:Fillvector.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

int main() 
{
	std::string single_string = "";
	std::vector< std::string > v;
	std::ifstream in("Fillvector.cpp");
	std::string line;
	
	while( std::getline( in, line ) )
		v.push_back(line); // Add the line to the end
	
	for( std::vector< std::string >::const_iterator itr = v.begin(); itr != v.end(); ++itr )
		single_string += *itr;	

	std::cout << single_string << "\n";
	return 0;
} ///:~
