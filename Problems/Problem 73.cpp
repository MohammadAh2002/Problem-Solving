/*

    Write a program to read a number and print it in order from left to right.

    Input:
    1234

    Output:
    1
    2
    3
    4

*/

#include <iostream>
using namespace std;

int read_number(string massege) {

    cout << massege;

    int number;
    cin >> number;

    return number;
}

int number_in_revers(int number) {

    int num_reversd = 0, reminder;
    do {
        reminder = number % 10;
        number = number / 10;
        num_reversd = num_reversd * 10 + reminder;
    } while (number > 0);

    return  num_reversd;
}

void print_digits(int number){

    int reminder;
    do {
        reminder = number % 10;
        number = number / 10;
        
        cout << reminder << endl;

    } while (number > 0);


}

int main()
{
    int number = read_number("enter a number: ");

    print_digits(number_in_revers(number));

    return 0;
}
