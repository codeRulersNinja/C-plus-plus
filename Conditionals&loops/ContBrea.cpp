#include<iostream>
using namespace std;

int main() {
    for(;;){
        cout << "Enter two integers: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;

        cout << "Do you wish to correct the numbers? (y/n): ";
        char changeNum = '\0';
        cin >> changeNum;

        if (changeNum == 'y'){
            continue;
        }

        cout << num1 << " X " << num2 << " = " << num1*num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;

        cout << "press x to exit or any other key to recalculate" << endl;
        char userSelect ='\0';
        cin >> userSelect;

        if (userSelect == 'x'){
            break;
        }

        cout << "Goodbye!" << endl;

        return 0;
    }
}