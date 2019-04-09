#pragma once
#ifndef QUEUE
#define QUEUE

#include <iostream>
#include <string>

using namespace std;

template <typename typen>
struct Node
{
	typen data;
	Node* next;
};


template<class type>
class Queue
{
private:
	type data;
	Node<type>* front_element;
	Node<type>* rear_element;

public:

	Queue();
	Queue(type value, int initial_size);
	Node<type>* front();
	void push(type value);
	void pop();
	int size();
	void print();
	~Queue();

};

#endif QUEUE