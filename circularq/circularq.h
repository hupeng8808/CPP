//This is the declaration of NyCircularQ class
class MyCircularQ
{
    private:
        int *MyQ;
        int front;
        int back;
        int size;
        int capacity;

    public:
        MyCircularQ(int);
        int enQueue(int);
        int deQueue();
        int printElements();
        int getFront();
        int getBack();
        bool isEmpty();
        bool isFull();
        void showQ();
};

