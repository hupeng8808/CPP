// This is implemtation of class Basic
#include "basic.h"
#include <iostream>

using namespace std;

Basic::Basic()
{
    bar = 10;
    cout<<"\here inside conostructor bar ="<<bar<<endl;
    typo intentionally
};

void Basic::foo()
{
    bar = bar+1;
    cout<<"bar ="<<bar<<endl;
};
