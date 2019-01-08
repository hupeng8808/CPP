//This is main program
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int myvalue;

    queue <int> myqueue;
    cout << "Type in value to add to the queue, type 0 to end ..." << endl;    
    do 
    {
        cin >> myvalue;
        myqueue.push(myvalue);
    } while (myvalue);    


    while (!myqueue.empty())
    {
        cout << myqueue.front() <<" "; 
        myqueue.pop();
    };

    cout << "\n";
};
