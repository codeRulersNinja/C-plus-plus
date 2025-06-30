#include<iostream>
using namespace std;

int main() {
    enum DaysOfWeek
    {
        sunday = 0,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday
    };
    cout << "Find what days of the week are named after!" << endl;
    cout << "Enter a number for a day (Sunday = 0): ";

    int dayInput = sunday;
    cin >> dayInput;

    switch (dayInput)
    {
    
        case sunday:
        cout << "sunday was named after sun" <<endl;
        break;
    
        case monday:
        cout << "monday was named after moon" <<endl;
        break;

        case tuesday:
        cout << "tuesday was named after mars" <<endl;
        break;

        case wednesday:
        cout << "wednesday was named after mercury" <<endl;
        break;

        case thursday:
        cout << "thursday was named after jupiter" <<endl;
        break;

        case friday:
        cout << "friday was named after venus" <<endl;
        break;

        case saturday:
        cout << "saturday was named after saturn" <<endl;
        break;

        default:
        cout << "wrong input, execute again" <<endl;
        break;
    }
    return 0;
}