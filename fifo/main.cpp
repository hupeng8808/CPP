//This is the main program
#include "fifo.h"

int main () 
{
    MyFIFO queue = MyFIFO(10);

    queue.enQueue(1);
    queue.enQueue(2);
    queue.enQueue(3);
    queue.deQueue();
    queue.enQueue(4);
    queue.enQueue(5);
    queue.deQueue();
    queue.deQueue();
    queue.deQueue();
    queue.deQueue();
    queue.deQueue();
    queue.enQueue(100);
    queue.enQueue(290);
    queue.enQueue(30);
    queue.printElements();

    return 0;
};
