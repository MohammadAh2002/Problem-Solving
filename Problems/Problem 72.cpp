/*

    Write a program to read a number and check if it is Palindrome?
    Note: Palindrome is a number that reads the same from right to left.

    Input:
    1234
    12321

    Output:
    No, it is NOT a Palindrome number.
    Yes, it is a Palindrome number.

*/

#include <iostream>
using namespace std;

int read_number(string massege) {

    cout << massege;

    int number;
    cin >> number;

    return number;
}

int revers_number(int number){

    int num_reversed = 0,reminder;

    do {

        reminder = number % 10;
        number = number / 10;

        num_reversed = num_reversed * 10 + reminder;

    } while (number > 0);

        return num_reversed;
}

void print_palender_or_not(int number) {

    if (revers_number(number) == number)
        cout << "this number is palindor number";
    else
        cout << "this number is not a palndor number";

}

int main()
{
    
    int number = read_number("enter a number: ");

    print_palender_or_not(number);

    return 0;

}
