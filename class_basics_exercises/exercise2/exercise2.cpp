#include <iostream>
#include <string>

using std::string;
using std::cout;

#define REPLACE
#undef REPLACE

#ifndef REPLACE
struct Lib
{
	string a;
	string b;
	string c;

	Lib() 
	{
		a = "";
		b = "";
		c = "";
	}
	~Lib() {} 	

};

class Libc
{
	string a;
	string b;
	string c;
	
	public:
	void seta() { }
	void setb() { }
	void setc() { }
	string geta() { } 
	string getb() { } 
	string getc() { } 


};
#else
struct Lib
{
	string s[3];

	Lib() 
	{
		s[ 0 ] = "";
		s[ 1 ] = "";
		s[ 2 ] = "";
	}
	~Lib() {} 	

};

class Libc
{
	string s[3];
	
	public:
	void seta() { }
	void setb() { }
	void setc() { }

	string geta() { } 
	string getb() { } 
	string getc() { } 


};
#endif



int main( int argc, char **argv )
{
//	Lib x;
//	x.a = "this is a";
//	x.b = "this is b";
//	x.c = "this is c";
		
//	cout << x.a << "\n";
//	cout << x.b << "\n";
//	cout << x.c << "\n";	

}
