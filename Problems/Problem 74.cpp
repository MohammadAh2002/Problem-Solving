/*

    Write a program read a number, then print all digit frequency in that number

    Input:
    1223222

    Output:
    Digit 1 Frequency is 1 Time(s).
    Digit 2 Frequency is 5 Time(s).
    Digit 3 Frequency is 1 Time(s).

*/

#include <iostream>
using namespace std;

int read_number(string massege) {

    cout << massege;

    int num;
    cin >> num;

    return num;

}

short check_how_many_times(int number, int digit) {
                     
    int reminder;
    short sum = 0;

        while (number > 0) {

            reminder = number % 10;
            number = number / 10;

            if (reminder == digit)
                sum++;
        }
        return sum;
}

void print_result(int number) {


    for (int i = 0; i <= 9; i++) {

       short result = check_how_many_times(number, i);

        if (result == 0)
            continue;
        else
            cout << "the number[" << i << "] repeted " << result << " times\n";

    }

}


int main()
{
    int number = read_number("enter a number: ");

    print_result(number);

    return 0;

}