#include<iostream>
using namespace std;

int main()
{
    int n;
    int k = 1;
    cout << "Enter num of elememts: ";
    cin >> n;
    char ch = 'A';
    int num = 1;

    for(int i = 0; i < n; i++)
    {
            
        for(int j = i+1; j > 0; j--)
        {
            cout << ch <<" ";
            ch++;
        }
        cout<<endl;

    }
}