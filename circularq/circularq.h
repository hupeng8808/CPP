//This is the declaration of NyCircularQ class
class MyCircularQ
{
    private:
        int MyQ[5];
        int front;
        int back;
        int size;

    public:
        MyCircularQ();
        int enQueue(int);
        int deQueue();
        int printElements();
};

