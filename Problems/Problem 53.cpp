/*

    A restaurant charges 10% services fee and 16% sales tax.
    Write a program to read a BillValue and add service fee and sales tax to it,
    and print the TotalBill on the screen.
    
    Input:
    100

    Outputs:
    127.6

*/

#include <iostream>
using namespace std;


float read_bill() {

    int bill;

    cout << "what is the number: ";
    cin >> bill;

    return bill;
}
float charges() {

    return read_bill() * 1.1;

}
float fee() {
    return charges() * 1.16;
}
void print_total() {

    cout << "the total is: " << fee() << endl;

}

int main()
{
    
    print_total();


}
