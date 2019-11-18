/*
	Queue data structure implementation

	Enqueue() — Inserts element to the end of the queue
	Dequeue() — Removes an element from the start of the queue
	isEmpty() — Returns true if queue is empty
	peek() — Returns the first element of the queue
*/

#include <iostream>

template <typename T>
class Queue
{
private:
	int front;
	int back;
	int capacity;
	int count;
	T *buf;
public:
	Queue(int size);
	~Queue();

	bool Enqueue(const T& value_type);
	bool Dequeue();
	bool isEmpty();
	T peek();

	bool isFull();
	int size();
};

template <typename T>
Queue<T>::Queue(int size)
{
	buf = new T[size];
	capacity = size - 1;
	front = 0;
	back = -1;
	count = 0;
}

template <typename T>
Queue<T>::~Queue()
{
	delete[] buf;
}

template <typename T>
bool Queue<T>::Enqueue(const T& value_type)
{
	if(isFull()){
		std::cout << "Queue is full overflow program terminated " << std::endl;
		exit(EXIT_FAILURE);
	}
	back = (back + 1) % capacity;
	buf[back] = value_type;
	count++;
	std::cout << "element inserted: " << value_type << " current size: " << count << std::endl; 
}

template <typename T>
bool Queue<T>::Dequeue()
{
	if(isEmpty())
	{
		std::cout << "Queue is empty underflow program terminated " << std::endl;
		exit(EXIT_FAILURE);
	}
	front = (front + 1) % capacity;
	count--;
}

template <typename T>
T Queue<T>::peek()
{
	if(isEmpty())
	{
		std::cout << "Queue is empty program terminated " << std::endl;
		exit(EXIT_FAILURE);
	}

	return buf[front];
}

template <typename T>
bool Queue<T>::isEmpty()
{
	return (size() == 0);
}

template <typename T>
bool Queue<T>::isFull()
{
	return (size() == capacity); 
}

template <typename T>
int Queue<T>::size()
{
	return count;
}

int main(int argc, char **argv)
{
	Queue<int> q(10);

	q.Enqueue(1);
	q.Enqueue(2);
	q.Enqueue(3);
	q.Enqueue(4);
	q.Enqueue(5);
	q.Enqueue(7);
	q.Enqueue(8);
	q.Enqueue(9);
	q.Enqueue(10);

	std::cout << "Queue size is: " << q.size() << std::endl;
	for(int i = 0; i < q.size(); ++i )
	{
		std::cout << "iterating: " << i << " " << q.peek() << std::endl;
		q.Dequeue();
	}

	return 0;

}