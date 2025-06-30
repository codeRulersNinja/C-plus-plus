#include<iostream>
using namespace std;

int main(){
    for(char userSelect = 'm';(userSelect!='x');){
        cout << "Enter the two integers: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;

        cout << num1 << " x " << num2 << " = " << num1*num2 <<endl;
        cout << num1 << " + " << num2 << " = " << num1+num2 <<endl;
        
        cout << "press x if you want to exit and any other key to recalculate" << endl;
        cin >> userSelect;
    }
    cout << "goodbye!" << endl;
    return 0;
}