#include<iostream>
using namespace std;
const double pi = 3.14159265;

void QueryAndCal()
{
    cout << "enter radius: ";
    double radius = 0;
    cin >> radius;

    cout << " Area: " << pi * radius * radius << endl;

    cout << "Do you wish to calculate circumference (y/n)? ";
    char calcCircum = 'n';
    cin >> calcCircum;

    if (calcCircum == 'n'){
        return;
    }
    cout << "Circumference: " << 2 * pi * radius << endl;
    return;
}

int main()
{
    QueryAndCal();

    return 0;
}