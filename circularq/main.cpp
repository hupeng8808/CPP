//This is the main program
#include "circularq.h"
#include <iostream>

using namespace std;

int main()
{
    MyCircularQ myqueue;
    myqueue.enQueue(1);
    myqueue.enQueue(2);
    myqueue.enQueue(3);
    myqueue.enQueue(4);
    myqueue.enQueue(5);
    myqueue.deQueue();
    myqueue.deQueue();
    myqueue.deQueue();
    myqueue.enQueue(6);
    myqueue.enQueue(7);
    myqueue.enQueue(8);
    myqueue.enQueue(9);
    myqueue.enQueue(10);
    myqueue.printElements();
};
