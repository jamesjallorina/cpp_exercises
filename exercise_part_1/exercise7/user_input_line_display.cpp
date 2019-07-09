#include <iostream>
#include <fstream>
#include <string>

int main( int argc, char **argv )
{
	std::string buffer = "";	
	std::string filename = ""; 	
	std::ifstream filestream;
	
	if( argc < 2 )
	{
		std::cout << "./user_input_line_display [ filename ] " << "\n";
		return (-1);
	}
	
	filename = argv[1];
	filestream.open( filename.c_str(), std::ifstream::in);

	if( filestream.good() )
	{
		std::cout << "file is good " << "\n";
		if( !filestream.is_open() )
		{
			std::cout << "could not open file " << "\n";
			return (-1);
		}
		std::cout << "file open is okay " << "\n";
	}
	
	while( std::getline( filestream, buffer ) )
	{
		std::cout << buffer << "\n";
		std::cout << "press enter to continue . . . \n";
		std::getchar( );
	}
	filestream.close();
	return 0;
}
