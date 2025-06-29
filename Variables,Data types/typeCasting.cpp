#include<iostream>
using namespace std;

int main() {
    double d = 3.14;
    float f;
    cout << "Original double value: " << d << endl;
    f = d; // Implicit conversion from double to float
    cout << "After Implicit conversion from double to float: " << f << endl;

    
    // char to string
    char charVal = 'A';
    string strVal = string(1, charVal);  // Explicit conversion using string constructor
    
    // string to char (taking first character)
    string strInput = "Hello";
    char charFromString = strInput[0];   // Explicitly taking first character
    
    cout << "Char value: " << charVal << endl;
    cout << "Converted to string: " << strVal << endl;
    cout << "String value: " << strInput << endl;
    cout << "Converted to char (first): " << charFromString << endl;

    return 0;

}