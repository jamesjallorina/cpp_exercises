#include <iostream>
#include <fstream>
#include <sstream>
#include <ctype.h>

int word_counter( std::ifstream &fs, const std::string &word )
{
	std::string token = "";
	std::string buffer = "";
	size_t found = 0;
	int number_of_word_occurs = 0;
	
	while( std::getline( fs, buffer ))
	{
		std::stringstream ss( buffer );
		while( std::getline( ss, token, ' ' ) ) 
		{
			if( token == word )
			number_of_word_occurs++;
		}
	}	
	return number_of_word_occurs;
}

int main(int argc, char **argv)
{
	std::string filename;
	std::string word_to_search;
	if(argc < 3)
	{
		std::cout << "./equal_operator_counter [filename] [word_to_search] \n";
		return -1;
	}
	filename = argv[1];
	word_to_search = argv[2];
	
	std::cout << "filename [" << filename << "]\n";
	std::cout << "word to search [" << word_to_search << "]\n";
	std::ifstream filestream( filename.c_str(), std::ifstream::in );

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

	std::cout << "total number of word occurences inside the file: " << word_counter( filestream, word_to_search ) << "\n";
	filestream.close();	
	return 0;
}
