/*
	Write a program in C to print all permutations of a given string using pointers. Go to the editor Expected Output :
	The permutations of the string are :
	abcd abdc acbd acdb adcb adbc bacd badc bcad bcda bdca bdac cbad cbda cabd cadb cdab cdba db ca dbac dcba dcab dacb dabc
*/
#include <iostream>


int main()
{
	char arr[] = {'a', 'b', 'c', 'd' };
	int numArr = sizeof(arr)/sizeof(char);

	char *p = arr;

	std::cout << *(p + 0) << *(p + 1) << *(p + 2) << *(p + 3) << "\n";
	std::cout << *(p + 0) << *(p + 1) << *(p + 3) << *(p + 2) << "\n";
	std::cout << *(p + 0) << *(p + 2) << *(p + 1) << *(p + 3) << "\n";
	std::cout << *(p + 0) << *(p + 2) << *(p + 3) << *(p + 1) << "\n";
	std::cout << *(p + 0) << *(p + 3) << *(p + 2) << *(p + 1) << "\n";
	std::cout << *(p + 0) << *(p + 3) << *(p + 1) << *(p + 2) << "\n";
	std::cout << *(p + 1) << *(p + 0) << *(p + 2) << *(p + 3) << "\n";
	std::cout << *(p + 1) << *(p + 0) << *(p + 3) << *(p + 2) << "\n";
	std::cout << *(p + 1) << *(p + 2) << *(p + 0) << *(p + 3) << "\n";
	std::cout << *(p + 1) << *(p + 2) << *(p + 3) << *(p + 0) << "\n";
	std::cout << *(p + 1) << *(p + 3) << *(p + 2) << *(p + 0) << "\n";
	std::cout << *(p + 1) << *(p + 3) << *(p + 0) << *(p + 2) << "\n";
	std::cout << *(p + 2) << *(p + 1) << *(p + 0) << *(p + 3) << "\n";
	std::cout << *(p + 2) << *(p + 1) << *(p + 3) << *(p + 0) << "\n";
	std::cout << *(p + 2) << *(p + 0) << *(p + 1) << *(p + 3) << "\n";
	std::cout << *(p + 2) << *(p + 0) << *(p + 3) << *(p + 1) << "\n";
	std::cout << *(p + 2) << *(p + 3) << *(p + 0) << *(p + 1) << "\n";
	std::cout << *(p + 2) << *(p + 3) << *(p + 1) << *(p + 0) << "\n";
	std::cout << *(p + 3) << *(p + 1) << *(p + 2) << *(p + 0) << "\n";
	std::cout << *(p + 3) << *(p + 1) << *(p + 0) << *(p + 2) << "\n";
	std::cout << *(p + 3) << *(p + 2) << *(p + 1) << *(p + 0) << "\n";
	std::cout << *(p + 3) << *(p + 2) << *(p + 0) << *(p + 1) << "\n";
	std::cout << *(p + 3) << *(p + 0) << *(p + 2) << *(p + 1) << "\n";
	std::cout << *(p + 3) << *(p + 0) << *(p + 1) << *(p + 2) << "\n";
	return 0;

}
