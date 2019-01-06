//This is the main program
#include "circularq.h"
#include <iostream>

using namespace std;

int main()
{
    int m;

    cout << "Type in max size of the queue: " << endl;
    cin >> m;
    MyCircularQ myqueue(m);
    myqueue.enQueue(1);
    myqueue.enQueue(2);
    myqueue.enQueue(3);
    myqueue.enQueue(4);
    myqueue.enQueue(5);
    myqueue.deQueue();
    myqueue.deQueue();
    myqueue.deQueue();
    myqueue.deQueue();
    myqueue.deQueue();
    myqueue.deQueue();
    myqueue.deQueue();
    myqueue.enQueue(6);
    myqueue.enQueue(7);
    myqueue.enQueue(8);
    myqueue.enQueue(9);
    myqueue.enQueue(10);
    myqueue.enQueue(11);
    myqueue.enQueue(12);
    myqueue.enQueue(13);
    myqueue.enQueue(14);
    myqueue.enQueue(15);
    myqueue.enQueue(16);
    myqueue.enQueue(17);
    myqueue.enQueue(18);
    myqueue.enQueue(19);
    myqueue.enQueue(20);
    myqueue.enQueue(21);
    myqueue.enQueue(22);
    myqueue.enQueue(23);
    myqueue.enQueue(24);
    myqueue.enQueue(25);
    myqueue.enQueue(26);
    myqueue.enQueue(27);
    myqueue.enQueue(28);
    myqueue.enQueue(29);
    myqueue.enQueue(30);
};
