/*

    Write a program to read a TotalBill and CashPaid and calculate the remainder to be paid back.
    
    Input:
    20
    50

    Outputs:
    30

*/

#include <iostream>
using namespace std;

int read_num(string masseg) {

    int number;

    cout << masseg;
    cin >> number;

    return number;
}

int calculate_the_reminder(int totalbill, int cashpaid) {

    int reminder = cashpaid - totalbill;

    return reminder;
}

void print_the_reminder(int reminder) {

    cout << "the reminder is: " << reminder << endl;

}

int main()
{
    
    int totalbill = read_num("what is the totalbill: ");
    int cashpaid = read_num("how mauch he paid in cash: ");


    print_the_reminder(calculate_the_reminder(totalbill, cashpaid));
}
