// This is to implement MyFIFO class
#include "fifo.h"
#include <iostream>

using namespace std;

MyFIFO::MyFIFO (int size)
{
    sizeOfQ = size;
    fifoQ = new int [sizeOfQ];
    back = -1;
};

int MyFIFO::enQueue (int newElement)
{
    if (( newElement < 0 ) | ( newElement > 100))
    {
       cout << "Element " << newElement << " is > 100 or < 0, invalid, not enQueued!" << endl;
       return 1;
    }

    if ( back == -1 ) {
        back = 0;
    } else {
        back++;
    };

    fifoQ[back] = newElement; 
    cout << newElement << " enQueued" << endl;
    return 0;
};

int MyFIFO::deQueue()
{
    if ( back == -1 ) 
        return 1;
    cout << fifoQ[0] << " deQueued" << endl;
    for ( int i = 0; i < back; i++ )
    {
        fifoQ[i] = fifoQ[i+1];
    }; 
    back--;
    return 0;
};

int MyFIFO::printElements()
{
    if (back == -1) 
    {
        cout << "Nothing to print for the queue!" << endl;
        return 1;
    };
    for ( int i = 0; i <= back; i++ )
    {
        cout << fifoQ[i] << " ";
    }
    cout << endl;
    return 0;
};

