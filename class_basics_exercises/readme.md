## Class Basics Exercises

1. Create a class with public, private, and protected data
members and function members. Create an object of this
class and see what kind of compiler messages you get
when you try to access all the class members.

2. Write a struct called Lib that contains three string objects
a, b, and c. In main( ) create a Lib object called x and
assign to x.a, x.b, and x.c. Print out the values. Now
replace a, b, and c with an array of string s[3]. Show that
your code in main( ) breaks as a result of the change.
Now create a class called Libc, with privatestring
objects a, b, and c, and member functions seta( ), geta( ),
setb( ), getb( ), setc( ), and getc( ) to set and get the
values. Write main( ) as before. Now change the private
string objects a, b, and c to a privatearray of string s[3].
Show that the code in main( ) does not break as a result
of the change.

3. Create a class and a global friend function that
manipulates the private data in the class.

4. Write two classes, each of which has a member function
that takes a pointer to an object of the other class. Create
instances of both objects in main( ) and call the
aforementioned member function in each class.

5. Create three classes. The first class contains private data,
and grants friendship to the entire second class and to a
member function of the third class. In main( ),
demonstrate that all of these work correctly.

6. Create a Hen class. Inside this, nest a Nest class. Inside
Nest, place an Egg class. Each class should have a
display( ) member function. In main( ), create an instance
of each class and call the display( ) function for each one.

7. Modify Exercise 6 so that Nest and Egg each contain
private data. Grant friendship to allow the enclosing
classes access to this private data.

8. Create a class with data members distributed among
numerous public, private, and protected sections. Add a
member function showMap( ) that prints the names of
each of these data members and their addresses. If
possible, compile and run this program on more than one
compiler and/or computer and/or operating system to
see if there are layout differences in the object.
