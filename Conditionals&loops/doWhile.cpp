#include<iostream>
using namespace std;

int main() {
    char userSelect = 'x';
    do
    {
       cout << "Enter two numbers: "<<endl;
       int num1 = 0, num2 = 0;
       cin >> num1;
       cin >> num2;

       cout << num1 << " x " << num2 << " = " << num1*num2 <<endl;
       cout << num1 << " + " << num2 << " = "<< num1+num2 <<endl;

       cout << "press x if want to exit or any other key to continue"<<endl;
       cin >> userSelect;
    } while (userSelect != 'x');

    cout << "Goodbye!" <<endl;

    return 0;