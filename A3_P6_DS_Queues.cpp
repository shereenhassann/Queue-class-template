//Queue class using templates and linked list 

#include <iostream>
#include <string>
#include "Queue.h"

using namespace std;



int main()
{
	Queue<int> queue1 (4, 6);
	cout << "Size: " << queue1.size() << endl;
	queue1.push(3);
	queue1.push(2);
	queue1.push(1);
	queue1.push(5);
	cout << "Size: " << queue1.size() << endl;
	queue1.pop();
	queue1.print();
	cout << "Size: " << queue1.size() << endl;
    return 0;
}

