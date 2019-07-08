/*
 * 1. Modify Hello.cpp so that it prints out your name and age
 *(or shoe size, or your dog’s age, if that makes you feel
 * better). Compile and run the program.
 */

#include <iostream>
#include <string>

int main( )
{
	std::string name = "James";
	std::string dog_name = "Jarill";
	int age = 30;
	int shoe_size = 12;
	
	std::cout << "name: " << name << "\n";
	std::cout << "age: " << age << "\n";
	std::cout << "shoe size: " << shoe_size << "inches " << "\n";
	std::cout << "dog name: " << dog_name << "\n";
	return 0;
}
