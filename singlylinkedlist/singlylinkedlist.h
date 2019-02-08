// This is the C++ header file for Singly Linked List
#include <iostream>

using std::string;

class SNode
{
private:
    string element;
    SNode *next;

friend class SinglyLinkedList;
};

class SinglyLinkedList
{
private:
	SNode *head;

public:
	SinglyLinkedList();
	~SinglyLinkedList();

	bool empty();
	string front();
	void addFront(string&);
	void removeFront();
};