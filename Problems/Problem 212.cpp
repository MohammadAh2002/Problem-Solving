/*

    Write a program to print Number of Days in a certain Month.
    Note: Two lines of code (Logic)

*/

#include <iostream>

using namespace std;

bool IsLeapYear() {

    return true;

}

short NumberOfDaysInMonth(int month, int year) {

    short DaysInMonth[12] {30,28,31,30,31,30,30,31,31,30,31,30};

    return (month == 2) ? (IsLeapYear() ? 29 : 28) : DaysInMonth[month - 1];

}

int main()
{
    
    cout << "Number of Days in Month (" << 4 << ") is: " <<
         NumberOfDaysInMonth(4, 2002) << endl;

    return 0;
}
