#include<iostream>
using namespace std;

double Area(double r, double pi = 3.14){
    return pi*r*r;
}

int main()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    cout << "pi is 3.14, do you wish to change this (y/n)? ";
    char changePi = 'n';
    cin >> changePi;

    double circleArea = 0;
    if (changePi == 'y')
    {
        double newPi = 3.14;
        cin >> newPi;
        cout<< "the area of the circle: " << Area(radius,newPi);
    }else{
        cout << "the area of the circle: " << Area(radius);
    }
}