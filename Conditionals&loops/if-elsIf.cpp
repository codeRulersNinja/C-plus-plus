#include<iostream>
using namespace std;

int main() {
    enum DaysOfWeek{
        sunday = 0,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday
    };
    cout << "Enter what days of the week are named after! " << endl;
    cout << "Enter a number for a day (Sunday = 0): ";

    int dayInput = sunday;
    cin >> dayInput;

    if(dayInput == sunday)
    {
        cout << "Sunday was named after sun" << endl;
    }
    else if (dayInput == monday){
        cout << "Monday was named after moon" << endl;
    }
    else if (dayInput == tuesday){
        cout << "Tuesday was named after mars" << endl;
    }
    else if (dayInput == wednesday){
        cout << "Wednesday was named after mercury" << endl;
    }
    else if (dayInput == thursday){
        cout << "Thursday was named after jupiter" << endl;
    }
    else if (dayInput == friday){
        cout << "Friday was named after venus" << endl;
    }
    else if (dayInput == saturday){
        cout << "Saturday was named after saturn" << endl;
    }else{
        cout << "wrong input, execute again" << endl;
    }
    return 0;
}