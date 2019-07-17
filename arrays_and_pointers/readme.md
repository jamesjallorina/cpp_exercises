## Arrays And Pointers Exercises

1. Write a program in C to show the basic declaration of pointer. Go to the editor
Expected Output :

 Pointer : Show the basic declaration of pointer :                                                            
-------------------------------------------------------                                                       
 Here is m=10, n and o are two integer variable and *z is an integer                                          
                                                                                                              
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50                                                          


2. Write a program in C to demonstrate how to handle the pointers in the program. Go to the editor
Expected Output :

Address of m : 0x7ffcc3ad291c
 Value of m : 29                                                                                              
                                                                                                              
 Now ab is assigned with the address of m.                                                                    
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 29                                                                                   
                                                                                                              
 The value of m assigned to 34 now.                                                                           
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 34                                                                                   
                                                                                                              
 The pointer variable ab is assigned with the value 7 now.                                                    
 Address of m : 0x7ffcc3ad291c                                                                                
 Value of m : 7 


3. Write a program in C to demonstrate the use of &(address of) and *(value at address) operator. Go to the editor
Expected Output :

Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z            

4. Write a program in C to add two numbers using pointers. Go to the editor
Test Data : 
Input the first number : 5 
Input the second number : 6 
Expected Output :

The sum of the entered numbers is : 11 


5. Write a program in C to add numbers using call by reference. Go to the editor
Test Data : 
Input the first number : 5 
Input the second number : 6 
Expected Output :

 The sum of 5 and 6  is 11 


6. Write a program in C to find the maximum number between two numbers using a pointer. Go to the editor
Test Data : 
Input the first number : 5 
Input the second number : 6 
Expected Output :

6 is the maximum number.  


7. Write a program in C to store n elements in an array and print the elements using pointer. Go to the editor
Test Data : 
Input the number of elements to store in the array :5 
Input 5 number of elements in the array : 
element - 0 : 5 
element - 1 : 7 
element - 2 : 2 
element - 3 : 9 
element - 4 : 8 
Expected Output :

 The elements you entered are :                                                                               
 element - 0 : 5                                                                                              
 element - 1 : 7                                                                                              
 element - 2 : 2                                                                                              
 element - 3 : 9                                                                                              
 element - 4 : 8   


8. Write a program in C to print all permutations of a given string using pointers. Go to the editor
Expected Output :

The permutations of the string are :                                                                         
abcd  abdc  acbd  acdb  adcb  adbc  bacd  badc  bcad  bcda  bdca  bdac  cbad  cbda  cabd  cadb  cdab  cdba  db
ca  dbac  dcba  dcab  dacb  dabc


9. Write a program in C to find the largest element using Dynamic Memory Allocation. Go to the editor
Test Data : 
Input total number of elements(1 to 100): 5 

Number 1: 5 
Number 2: 7 
Number 3: 2 
Number 4: 9 
Number 5: 8
Expected Output :

The Largest element is :  9.00 


10. Write a program in C to Calculate the length of the string using a pointer. Go to the editor
Test Data : 
Input a string : w3resource 
Expected Output :

The length of the given string w3resource                                                                    
is : 10    


11. Write a program in C to swap elements using call by reference. Go to the editor
Test Data : 
Input the value of 1st element : 5 
Input the value of 2nd element : 6 
Input the value of 3rd element : 7 
Expected Output :

The value before swapping are :                                                                              
element 1 = 5                                                                                                
element 2 = 6                                                                                                
element 3 = 7                                                                                                
                                                                                                             
The value after swapping are :                                                                               
element 1 = 7                                                                                                
element 2 = 5                                                                                                
element 3 = 6 


12. Write a program in C to find the factorial of a given number using pointers. Go to the editor
Test Data : 
Input a number : 5 
Expected Output :

The Factorial of 5 is : 120 


13. Write a program in C to count the number of vowels and consonants in a string using a pointer. Go to the editor
Test Data : 
Input a string: string 
Expected Output :

Number of vowels : 1                                                                                         
Number of constant : 5


14. Write a program in C to sort an array using Pointer. Go to the editor
Test Data : 
testdata 
Expected Output :

Test Data : 
Input the number of elements to store in the array : 5 
Input 5 number of elements in the array : 
element - 1 : 25 
element - 2 : 45 
element - 3 : 89 
element - 4 : 15 
element - 5 : 82 
Expected Output :
                                                                                           
 The elements in the array after sorting :                                                                    
 element - 1 : 15                                                                                             
 element - 2 : 25                                                                                             
 element - 3 : 45                                                                                             
 element - 4 : 82                                                                                             
 element - 5 : 89  


15. Write a program in C to show how a function returning pointer. Go to the editor
Test Data : 
Input the first number : 5 
Input the second number : 6 
Expected Output :

 The number 6 is larger.       


16. Write a program in C to compute the sum of all elements in an array using pointers. Go to the editor
Test Data : 
Input the number of elements to store in the array (max 10) : 5 
Input 5 number of elements in the array : 
element - 1 : 2 
element - 2 : 3 
element - 3 : 4 
element - 4 : 5 
element - 5 : 6
Expected Output :

 The sum of array is : 20 


17. Write a program in C to print the elements of an array in reverse order. Go to the editor
Test Data : 
Input the number of elements to store in the array (max 15) : 5 
Input 5 number of elements in the array : 
element - 1 : 2 
element - 2 : 3 
element - 3 : 4 
element - 4 : 5 
element - 5 : 6 
Expected Output :

 The elements of array in reverse order are :                                                                 
 element - 5 : 6                                                                                              
 element - 4 : 5                                                                                              
 element - 3 : 4                                                                                              
 element - 2 : 3                                                                                              
 element - 1 : 2        


18. Write a program in C to show the usage of pointer to structure. Go to the editor
Expected Output :

 John Alter from Court Street


19. Write a program in C to show a pointer to union. Go to the editor
Expected Output :

Jhon Mc Jhon Mc    


20. Write a program in C to show a pointer to an array which contents are pointer to structure. Go to the editor
Expected Output :

 Exmployee Name : Alex                                                                                        
 Employee ID :  1002                                                                                          


21. Write a program in C to print all the alphabets using a pointer. Go to the editor
Expected Output :

The Alphabets are :                                                                                         
 A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z 


22. Write a program in C to print a string in reverse using a pointer. Go to the editor
Test Data : 
Input a string : w3resource 
Expected Output :

 Pointer : Print a string in reverse order :                                                                  
------------------------------------------------                                                              
 Input a string : w3resource                                                                                  
 Reverse of the string is : ecruoser3w
