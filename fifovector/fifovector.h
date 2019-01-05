//This is to declare class of MyFIFO by using vector
#include <vector>

class MyFIFO
{
    private:
        std::vector <int> fifoQ;

    public:  
        MyFIFO();
        int enQueue(int);
        int deQueue();
        int printElements();
};
