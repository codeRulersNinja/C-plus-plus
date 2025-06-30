#include<iostream>
using namespace std;

int main() {
    const int numsToCal = 5;
    cout << "This program will calculate "<< numsToCal<<" Fibonacci num at a time "<<endl;

    int num1 = 0, num2 = 1;
    char wantMore = '\0';
    cout << num1 << " " << num2 << " ";

    do
    {
        for(int counter = 0; counter < numsToCal; ++counter)
        {
            cout << num1+num2 << " ";
            int num2Temp =num2;
            num2 = num1+num2;
            num1 = num2Temp;
        }
    } while (wantMore == 'y');

    cout << "Goodbye!" <<endl;

    return 0;    
}