#include<iostream>
#include<string>
using namespace std;

int main() {
    int someNums[] = { 1, 101, -1, 40, 2040 };

    for (const int aNum : someNums){
        cout << aNum << " ";
    }
    cout << endl;

    for (auto anElement : { 5, 222, 110, -45, 2017 }) {
        cout << anElement << ' ';
    }
    cout << endl;

    char charArray[] = {'h','e','i','g','h','t'};
    for (auto aChar : charArray){
        cout << aChar << ' ';
    }
    cout << endl;

    string sayHello { "Hello World!" };
    for (auto anElement : sayHello){
        cout << anElement << ' ';
    }
    cout << endl;

    return 0;
}
