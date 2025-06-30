#include<iostream>
using namespace std;

int main() {
    char userSelect = 'm';
    while (userSelect != 'x')
    {
        cout << "enter the two integer: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;

        cout << num1 << " x " << num2 << " = "<<num1*num2 << endl;
        cout << num1 << " + " << num2 << " = "<<num1+num2 << endl;

        cout << "press x to exit or any other key to recalculate" <<endl;
        cin >> userSelect;
    
    }

    cout << "Goodbye!" << endl;

    return 0;
}