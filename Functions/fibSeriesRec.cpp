#include<iostream>
using namespace std;

int getFibNum(int fibIndex)
{
    if(fibIndex < 2){
        return fibIndex;
    }else{
        return getFibNum(fibIndex-1)+getFibNum(fibIndex-2);
    }
}

int main()
    {
        cout << "Enter 0-based index of desired fibonacci num: ";
        int index = 0;
        cin >> index;

        cout << "Fibonacci num is: " << getFibNum(index) <<endl;

        return 0;
    }