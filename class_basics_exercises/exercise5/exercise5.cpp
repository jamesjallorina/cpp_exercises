#include <iostream>

class A;

class B
{
	public:
	void manipulate( A &a );
	
};

	

class C
{
	public:
	void manipulate( A &a );
	
};


class A
{
	private:
	int value_type;

	public:
	A() { value_type = 10; }
	~A() { }
	friend B;
	friend void C::manipulate(A &a);

};


void B::manipulate( A &a )
{
		std::cout << "Accessing class A value_type " << a.value_type << "\n";
}

void C::manipulate( A & a)
{
		std::cout << "Testing access class A value_type " << a.value_type << "\n";
}

int main( int argc, char **argv )
{
	A a;
	B b;
	C c;

	b.manipulate( a);
	c.manipulate( a);
	return 0;
}
