/*

    Write a program to ask the user to enter:
    • Day
    
    Then print the day as follows:
    • 1 Print Sunday
    • 2 Print Monday
    • 3 Print Tuesday
    • 4 Print Wednesday
    • 5 Print Thursday
    • 6 Print Friday
    • 7 Print Saturday
    • Otherwise print “Wrong Day” and ask the use to enter the day again.
    
    Example Inputs:
    6
    
    Outputs:
    Its Friday

*/

#include <iostream>
using namespace std;

enum WeekDays {satarday =1, sunday=2, monday=3, tuesday=4,
               wensday=5, thersday=6, friday=7};

void print_weekdays() {

    cout << "days of the week\n";
    cout << "(1)satarday\n";
    cout << "(2)sunday\n";
    cout << "(3)monday\n";
    cout << "(4)tuesday\n";
    cout << "(5)wensday\n";
    cout << "(6)thersday\n";
    cout << "(7)friday\n";
    cout << "the days is: ";
}

int read_days() {

    print_weekdays();

    int day;
    cin >> day;

    return day;
}

WeekDays int_to_enum(int day) {

    switch (day) {
    case 1:
        return satarday;
    case 2:
        return sunday;
    case 3:
        return monday;
    case 4:
        return tuesday;
    case 5:
        return wensday;
    case 6:
        return thersday;
    case 7:
        return friday;
    defult:
    }

}

void print_the_day(WeekDays day){


    if (day == satarday)
        cout << "its satarday\n";
    else if (day == sunday)
        cout << "its sunday\n";
    else if (day == monday)
        cout << "its  monday\n";
    else if (day == tuesday)
        cout << "its tuesday\n";
    else if (day == wensday)
        cout << "its wensday\n";
    else if (day == thersday)
        cout << "its thersday\n";
    else if (day == friday)
        cout << "its friday\n";
    else
        cout << "this is not a day\n";

}

int main()
{
    


    print_the_day(int_to_enum(read_days()));


}
