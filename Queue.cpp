#include "Queue.h"


template<class type>
Queue<type>::Queue()
{
	this->front_element = NULL;
	this->rear_element = NULL;
}

template<class type>
Queue<type>::Queue(type value, int initial_size)
{
	this->front_element = NULL;
	this->rear_element = NULL;

	for (int i = 0; i < initial_size; i++)
		this->push(value);
}

template<class type>
Node<type>* Queue<type>::front()
{
	return front_element;
}

template<class type>
void Queue<type>::push(type value)
{
	Node<type>* ptr = new Node<type>();
	ptr->data = value;
	ptr->next = NULL;

	if (front_element == NULL)
	{
		front_element = ptr;
		rear_element = ptr;
	}
	else
	{
		rear_element->next = ptr;
		rear_element = ptr;
	}
}

template<class type>
void Queue<type>::pop()
{
	Node<type>* ptr = front_element;
	front_element = front_element->next;
	delete ptr;
}

template<class type>
int Queue<type>::size()
{
	int count = 0;
	Node<type>* ptr = front_element;
	Node<type>* ptr2 = ptr;
	while (ptr != NULL)
	{
		count++;
		ptr2 = ptr;
		ptr = ptr->next;
	}
	return count;
}

template<class type>
void Queue<type>::print()
{
	Node<type>* ptr = front_element;
	Node<type>* ptr2 = ptr;
	cout << "Queue elements: " << endl;
	while (ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr2 = ptr;
		ptr = ptr->next;
	}

	cout << "\n\n";
}

template <class type>
Queue<type>::~Queue()
{
}


template class Queue<int>;
template class Queue<string>;
template class Queue<float>;