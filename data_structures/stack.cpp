/*
	implementations of stack
	list of operations
	1. Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
	2. Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
	3. Peek or Top: Returns top element of stack.
	4. isEmpty: Returns true if stack is empty, else false.
*/
#include <iostream>

#define MAX 1000

template <typename T>
class stack
{
public:
	stack(int size);
	~stack();
	bool push(const T& value_type);
	T pop();
	T peek();
	bool isEmpty();
	int size();
	bool isFull();

private:
	T *buf;
	int capacity;
	int top;
};

template<typename T>
stack<T>::stack(int size)
{
	buf = new T[size];
	capacity = size;
	top = -1;
}

template<typename T>
stack<T>::~stack()
{
	delete[] buf;
}

template <typename T>
bool stack<T>::push(const T& value_type)
{
	if( top >= MAX -1 ){
		std::cout << "stack overflow " << std::endl;
		return false;
	}
	else{
		buf[++top] = value_type;
		std::cout << "pushed onto stack " << " current size is: " << top * sizeof(T) << " bytes" << std::endl;
		return true;
	}
}

template <typename T>
T stack<T>::pop()
{
	if( top < 0 ){
		std::cout << "stack is empty underflow program/terminated " << std::endl;
		exit(EXIT_FAILURE); 
	}else{
		std::cout << "stack is not empty pop now " << std::endl;
		return buf[top--];
	}
}

template<typename T>
T stack<T>::peek()
{
	if(!isEmpty()){
		return buf[top];
	}
	else{
		std::cout << "stack is empty program terminated " << std::endl;
		exit(EXIT_FAILURE);
	}
}

template<typename T>
bool stack<T>::isEmpty()
{
	return top == -1;
}
template<typename T>
int stack<T>::size()
{
	return top - 1;
}

template<typename T>
bool stack<T>::isFull()
{
	return top == capacity - 1;
}

int main(int argc, char **argv)
{
	stack<int> s(10);
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.push(9);
	s.push(10);

	for(int i = 0; i < 10; i++)
		std::cout << s.pop() << std::endl;

	return 0;

}