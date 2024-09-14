/*

    Program to Check if a Number is Divisible by 2 without a Remainder.

*/

#include <iostream>
using namespace std;

enum enduvide {dividable = 1, notdevidable = 2};

int read_number(string massege) {

    int number;

    cout << massege;
    cin >> number;

    return number;
}

enduvide int_to_enum(int number) {

    if (number % 2 == 0)
        return dividable;
    else
        return notdevidable;
}

void print_result(enduvide number) {

    if (number == dividable)
        cout << "this number divde by two with no reminder.";
    else
        cout << "this number divide by two with reminder = 1.";

}

int main()
{
    
    enduvide number = int_to_enum(read_number("please inter a number: "));

    print_result(number);
}
