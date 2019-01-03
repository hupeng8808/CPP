//This is the implementation of MyArray class
#include "array.h"
#include <iostream>

using namespace std;

MyArray::MyArray()
{
}

int MyArray::addValue(int numValues)
{
    int valueIn;

    if ( numValues < 0 | numValues > 128) {
        return 1;
    };

    for (int i = 0; i < numValues; i++)
    {
        cin>>valueIn;
        if ( valueIn < 0 ) {
            return 1;
        } else {
            arrayValue[i] = valueIn;            
        };
    }
}

int MyArray::printValue(int numValues)
{
    if ( numValues < 0 | numValues > 128) {
        return 1;
    };

    for ( int i = 0; i < numValues; i++) {
        cout<<"["<<i<<"]= "<<arrayValue[i]<<endl;
    };
}
