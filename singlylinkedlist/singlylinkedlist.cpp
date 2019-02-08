// This is implemtation of class SinglyLinkedList
#include "singlylinkedlist.h"
#include <iostream>

using namespace std;

SinglyLinkedList::SinglyLinkedList()
{
    head = NULL;
};

SinglyLinkedList::~SinglyLinkedList()
{
    while (!empty())
        removeFront();
};

bool SinglyLinkedList::empty()
{
    return head == NULL; 
};

string SinglyLinkedList::front()
{
    return head->element;
};

void SinglyLinkedList::addFront(string& e)
{
    SNode* v = new SNode;
    v->element = e;
    v->next = head;
    head = v;
};

void SinglyLinkedList::removeFront()
{
    SNode* old = head;
    head = old->next;
    delete old;
};
