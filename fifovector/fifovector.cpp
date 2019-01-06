//This is to implement MyFIFO class by using vector STL
#include "fifovector.h"
#include <iostream>

using namespace std;

MyFIFO::MyFIFO()
{
    vector <int> fifoQ;
};


int MyFIFO::enQueue ( int newElement )
{
    fifoQ.push_back ( newElement );
    return 0;
};

int MyFIFO::deQueue()
{
    if ( fifoQ.size() == 0)
        return 1;
    fifoQ.erase(fifoQ.begin());
    return 0;
};

int MyFIFO::printElements()
{
	cout << fifoQ.size()<<endl;
	int num = fifoQ.size();
	for ( int i = 0; i < num; i++ ) 
    {
      cout << fifoQ[i] << " ";
    };
    cout << endl;
    return 0;
};

