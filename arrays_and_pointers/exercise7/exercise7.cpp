/*
	Write a program in C to store n elements in an array and print the elements using pointer. 
	Go to the editor Test Data : 
	Input the number of elements to store in the array :
	5 Input 5 number of elements in the array : element - 0 : 5 element - 1 : 7 element - 2 : 2 element - 3 : 9 element - 4 : 8 
	Expected Output :
	The elements you entered are :
	element - 0 : 5
	element - 1 : 7
	element - 2 : 2
	element - 3 : 9
	element - 4 : 8
*/
#include <iostream>


int main()
{
	int arr[] = { 5, 7, 2, 9, 8 };


	int numberOfContents = sizeof(arr)/sizeof(int);

	for( int i = 0; i < numberOfContents; ++i ) 
		std::cout << "element - " << i << " : " << arr[ i ] << "\n";

	return 0;

}
