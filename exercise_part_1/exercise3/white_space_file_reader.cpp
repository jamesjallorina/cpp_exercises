#include <iostream>
#include <fstream>
#include <ctype.h>

int white_space_counter(std::ifstream &fs)
{
	std::string buffer = "";
	std::string::const_iterator itr;
	int number_of_white_space = 0;
	
	while( std::getline( fs, buffer ))
	{
		for(itr = buffer.begin(); itr != buffer.end(); ++itr)
		{
			if( iswspace( *itr ) )
				number_of_white_space++;
		}
	}	
	return number_of_white_space;
}

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		std::cout << "./white_space_file_reader [filename] \n";
		return -1;
	}
	
	std::cout << "filename [" << argv[1] << "]\n";
	std::ifstream filestream(argv[1], std::ifstream::in);

	if(filestream.good())
	{
		std::cout << "file is good \n";
		if(!filestream.is_open())
		{
			std::cout << "file is not okay to open \n";
			return -1;
		}
		std::cout << "file is okay to open \n";
	}

	std::cout << "total number of white space inside the file: " << white_space_counter(filestream) << "\n";
	filestream.close();	
	return 0;
}
