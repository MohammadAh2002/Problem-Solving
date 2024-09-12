/*

    calculate the monthly installment amount.
    
    Input:
    5000
    10

    Outputs:
    500

*/

#include <iostream>
using namespace std;

int read_postive_number(string message) {

    int number;

    cout << message;

    do {

        cin >> number;

    } while (number<= 0);

    return number;
}

float calculate_paypermonthe(int loan_amount,int monthes) {

    return (float)loan_amount / monthes;

}

int main()
{
    
    int loan_amount, monthes;

    loan_amount = read_postive_number("how much is the loan: ");
    monthes = read_postive_number("in how many months you want to pay it: ");

    cout << "you gine need to pay " << calculate_paypermonthe(loan_amount, monthes) << " per monthe" << endl;

}
