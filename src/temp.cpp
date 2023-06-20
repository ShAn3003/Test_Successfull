#include <iostream>
#include <vector>
#include "temp.h"
using namespace std;

int main()
{
    vector<int> test;
    for (int i = 0; i < 100000; i++)
    {
        test.push_back(i);
        cout << "test :" << test[i] << endl;
    }
    return 0;
}