//This is the main program
#include "twosum.h"
#include <iostream>

using namespace std;

int main()
{
    int nNums, num, target, size, front, back;
	vector<int> Nums;
	
    Solution Sol;
   

    Nums.clear();
    
	cout << "How many numbers to process?" << endl;
	cin >> nNums;

    for ( int i = 0; i < nNums; i ++ ) {
        cout << "Type in number " << i << ":" << endl;
        cin >> num;
        Nums.push_back(num);
    };

    cout << "What is the target number?" << endl;
    cin >> target;

	size = Sol.twoSum(Nums, target).size();
	front = Sol.twoSum(Nums, target).front();
	back = Sol.twoSum(Nums, target).back();

    if (size == 0) {
        cout << "No numbers can be added to the target!!" << endl;
        return 1;
    }

	cout << "The two numbers that add to the target are:" << endl;
    cout << front << ", " << back << endl;
    
    return 0;
};
