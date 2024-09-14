/*

    Write a program read a digit and a number, then print digit frequency in that number

    Input:
    1223222
    2

    Output:
    Digit 2 Frequency is 5 Time(s).

*/

#include <iostream>
using namespace std;

int read_number(string massege) {

    cout << massege;

    int num;
    cin >> num;

    return num;

}
int how_many_times(int number, short digit) {

    int sum = 0, reminder;
    
    while (number > 0) {

        reminder = number % 10;
        number = number / 10;

        if (reminder == digit)
            sum += 1;
    }

    return sum;
}
void print_result(int number, int sum) {

    cout << "the number[" << number << "] repeted " << sum << " times\n";

}

int main()
{
    
    int number = read_number("enter a number: ");
    short digit = read_number("what is thenumber you want see how many time repeated: ");

    print_result(digit,how_many_times(number, digit));

    return 0;

}
