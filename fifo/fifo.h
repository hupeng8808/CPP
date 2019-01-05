//This is the declaration of MyFIFO class for First-In-First-Out queue
class MyFIFO
{
    private:
        int sizeOfQ;
        int *fifoQ;
        int back;

    public:
        MyFIFO ( int );
        int enQueue ( int );
        int deQueue ();
        int printElements();
};
