//This is the implementation of MyCircularQ class
#include "circularq.h"
#include <iostream>

using namespace std;

MyCircularQ::MyCircularQ()
{
    front = 0;
    back = -1;
    size = 0;
};


int MyCircularQ::enQueue ( int newElement )
{
    if ( size == 5 )
    {
        cout << "queue size is " << size << " no room to add more elements!" << endl;
        return 1;
    };

    back = (back+1) % 5;
    MyQ[back] = newElement;
    size++;
};


int MyCircularQ::deQueue()
{
    if ( size == 0 ) 
    {
        cout << "queue size is " << size << " nothing to dequeue...." << endl;
        return 1;
    };

    front = ( front + 1 ) % 5;
    size--;
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
        for ( int i = front; i < 5 ; i++ ) 
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

