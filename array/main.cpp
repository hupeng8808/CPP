//This is the main program
#include "array.h"
#include <iostream>

using namespace std;

int main() {
    int num;

    MyArray myarray;

    cout<<"ASK: How many values do you want to add?"<<endl;
    cin>>num;
    myarray.addValue(num);
    myarray.printValue(num);

    return 0;
}
