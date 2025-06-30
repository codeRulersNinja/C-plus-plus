#include<iostream>
using namespace std;

int main() {
    cout << "Enter a line of text: "<< endl;
    string userInput;
    getline(cin,userInput);

    char copyInput[20] = {};
    if(userInput.length() < 20)
    {
        cout << "Input within bounds, creating copy " << endl;
        userInput.copy(copyInput, userInput.length());
        cout << "Copy created: "<< copyInput << endl;
    }
    else{
        cout << "bounds exceeded: cannot copy!" << endl;
        return 0;
    }
}