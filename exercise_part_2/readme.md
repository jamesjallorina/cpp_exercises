## Exercises Part 2

1. Create a header file (with an extension of ‘.h’). In this file,
declare a group of functions by varying the argument
lists and return values from among the following: void,
char, int, and float. Now create a .cpp file that includes
your header file and creates definitions for all of these
functions. Each definition should simply print out the
function name, argument list, and return type so you
know it’s been called. Create a second .cpp file that
includes your header file and defines int main( ),
containing calls to all of your functions. Compile and run
your program.

2. Write a program that uses two nested for loops and the
modulus operator (%) to detect and print prime numbers
(integral numbers that are not evenly divisible by any
other numbers except for themselves and 1).

3. Write a program that uses a while loop to read words
from standard input (cin) into a string. This is an
“infinite” while loop, which you break out of (and exit
the program) using a break statement. For each word
that is read, evaluate it by first using a sequence of if
statements to “map” an integral value to the word, and
then use a switch statement that uses that integral value
as its selector (this sequence of events is not meant to be
good programming style; it’s just supposed to give you
exercise with control flow). Inside each case, print
something meaningful. You must decide what the
“interesting” words are and what the meaning is. You
must also decide what word will signal the end of the
program. Test the program by redirecting a file into the
program’s standard input (if you want to save typing,
this file can be your program’s source file).

4. Modify Menu.cpp to use switch statements instead of if
statements.

5. Modify YourPets2.cpp so that it uses various different
data types (char, int, float, double, and their variants).
Run the program and create a map of the resulting
memory layout. If you have access to more than one kind
of machine, operating system, or compiler, try this
experiment with as many variations as you can manage.

6. Create two functions, one that takes a string* and one
that takes a string&. Each of these functions should
modify the outside stringobject in its own unique way.
In main( ), create and initialize a string object, print it,
then pass it to each of the two functions, printing the
results.

7. Compile and run Static.cpp. Remove the static keyword
from the code, compile and run it again, and explain
what happens.
