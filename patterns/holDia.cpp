#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++){

        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout<<"*";
        // cout<<endl;

        if(i!=0){
            for(int j=0; j<=2*i-1; j++){
                cout<< " ";
            }
            cout<<"*";            
        }
        cout<<endl;
    }

    for(int i=0; i<n-1; i++){
        
        for(int ){

        }
        cout<<"*";

        if(i!=n-1){
            //spaces(2*(n-2-i)-1)
        }

        cout<<endl;
    }
}