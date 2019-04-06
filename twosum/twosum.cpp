//This is the implementation of twoSum solution class
#include "twosum.h"
#include <iostream>
#include <vector>

using namespace std;


vector<int> Solution::twoSum (vector<int>& Nums, int target)
{
    int a=0, b=0;

	twoNums.clear();

    for ( unsigned i = 0; i < Nums.size(); i ++ ) {
        a = Nums.at(i);
        for ( unsigned j = i+1; j < Nums.size(); j ++ ) {
            b = Nums.at(j);
            if ( a+b == target) {
                twoNums.push_back(a);
                twoNums.push_back(b);
                return twoNums;
            }
        }
    }

    return twoNums;
};