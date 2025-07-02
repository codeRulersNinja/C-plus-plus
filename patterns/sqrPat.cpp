#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter no. of elements in each line: ";
    cin >> n;
    int num = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << num << " ";  
            num++;          
        }
        cout<<endl;
    }
}