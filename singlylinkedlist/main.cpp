// This is main program of the Singly Linked List code
#include "singlylinkedlist.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1;

    SinglyLinkedList a;
    
	str1 = "first";
    a.addFront(str1);
    str1 = a.front();
    cout << "add element: " << str1 << endl;

	str1 = "second";
	a.addFront(str1);
	str1 = a.front();
	cout << "add element: " << str1 << endl;

	str1 = "third";
	a.addFront(str1);
	str1 = a.front();
	cout << "add element: " << str1 << endl;

	while (!a.empty())
	{
		a.removeFront();
		if (!a.empty())
		{
			str1 = a.front();
			cout << "after remove front: " << str1 << endl;
		}
		else
			cout << "List is empty" << endl;
	};

	cout << "End of the program!" << endl;

    return 0;
}
