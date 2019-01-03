// This is implemtation of class Basic
#include "basic.h"
#include <iostream>

using namespace std;

Basic::Basic()
{
    bar = 10;
    cout<<"inside conostructor bar ="<<bar<<endl;
};

void Basic::foo()
{
    bar = bar+1;
    cout<<"bar ="<<bar<<endl;
};
