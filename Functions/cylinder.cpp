#include<iostream>
using namespace std;

const double pi = 3.14159265;

double SurfaceArea(double radius, double height){
    return 2*pi*radius*radius + 2*pi*radius*height; 
}

int main() {
    cout << "Enter the radius of the cylinder: "<< endl;
    double radius = 0;
    cin >> radius;
    cout << "Enter the height of the cylinder: "<<endl;
    double height = 0;
    cin >> height;

    cout << "Surface area of the cylinder: " << SurfaceArea(radius,height) <<endl;
    return 0;
}