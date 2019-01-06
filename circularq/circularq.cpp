//This is the implementation of MyCircularQ class
#include "circularq.h"
#include <iostream>

using namespace std;

MyCircularQ::MyCircularQ( int max )
{
    capacity = max;
    MyQ = new int [capacity];
    front = 0;
    back = -1;
    size = 0;
};


int MyCircularQ::enQueue ( int newElement )
{
    if ( size == capacity )
    {
        cout << "queue size is " << size << " no room to add more elements!" << endl;
        return 1;
    };

    cout << "enQueue ";
    back = (back+1) % capacity;
    MyQ[back] = newElement;
    size++;
    showQ();
    return 0;
};


int MyCircularQ::deQueue()
{
    if ( size == 0 ) 
    {
        front = 0;
        back = -1;
        cout << "queue size is " << size << " nothing to dequeue...." << endl;
        return 1;
    };

    cout << "    deQueue ";
    front = ( front + 1 ) % capacity;
    size--;
    showQ();
    return 0;
};

int MyCircularQ::printElements()
{
    if ( size == 0 )
    {
        cout << "queue size is " << size << " nothing to print." << endl;
        return 1;
    };

    if ( front <= back ) {
        for ( int i = front; i <= back; i++ ) 
        {
            cout << MyQ[i] << " ";
        };
    } else {
        for ( int i = front; i < capacity ; i++ ) 
        {
            cout << MyQ[i] << " ";
        };
        for ( int i = 0; i <= back; i++ ) 
        {
            cout << MyQ[i] << " ";
        };
    };
    cout << endl;
    return 0;
};

int MyCircularQ::getFront()
{
    if ( size == 0 ) 
        return -1;
    else
        return MyQ[front];
};

int MyCircularQ::getBack()
{
    if ( size == 0 ) 
        return -1;
    else
        return MyQ[back];
};

bool MyCircularQ::isEmpty()
{
    return size==0;
};

bool MyCircularQ::isFull()
{
    return (size==capacity);
};

void MyCircularQ::showQ()
{
    if (isEmpty()) {
        cout << "queue is empty now" << endl;
        return;
    };
    printElements();
    cout << "front is " << getFront() << endl;
    cout << "back is " << getBack() << endl;
    cout << "\n";
    if (isFull())
        cout << "queue is FULL!" << endl;
    return;
};
