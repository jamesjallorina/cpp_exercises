/*
	Write a program in C to find the largest element using Dynamic Memory Allocation. Go to the editor Test Data : Input total number of elements(1 to 100): 5
	Number 1: 5 Number 2: 7 Number 3: 2 Number 4: 9 Number 5: 8 Expected Output :

	The Largest element is : 9.00
*/
#include <iostream>

int main()
{
	int size = 0;
	int largest = 0;

	std::cout << "Input total number of elements(1 to 100): ";
	std::cin >> size;
	int *p = new int[size];

	for( int i = 0; i < size; ++i )
	{
		std::cout << "Number " << i + 1 << ": ";
		std::cin >> p[ i ];
	}
	
	largest = p[ 0 ];
	for( int i = 1; i < size; ++i )
	{
		if( largest < p[ i ] )
			largest = p[ i ];
	}
	std::cout << "The Largest element is : " << largest << "\n";
	return ( 0 );
}
