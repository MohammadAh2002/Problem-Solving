/*

    Write a program to ask the user to enter:
    • Pennies, Nickels, Dimes, Quarters, Dollars
    Then calculate the total pennies , total dollars and print them on screen
    
    giving that:
    • Penny = 1
    • Nickel = 5
    • Dime = 10
    • Quarter = 25
    • Dollar = 100
    
    Example Inputs:
    5,5,5,5,5

    Outputs:
    705 Pennies
    7.05 Dollars

*/

#include <iostream>
using namespace std;

struct money {

    int penny, nickel, dime, quarter;
    float dollar;
};

money read_money() {

    money piggybank;

    cout << "how many peenys: ";
    cin >> piggybank.penny;

    cout << "how many nickel: ";
    cin >> piggybank.nickel;

    cout << "how many dime: ";
    cin >> piggybank.dime;

    cout << "how many quarter: ";
    cin >> piggybank.quarter;

    cout << "how many dollar: ";
    cin >> piggybank.dollar;

    return piggybank;

}

int calculate_pennys(money piggybank) {

    int total_pennys = piggybank.penny * 1 + piggybank.nickel * 5
        + piggybank.dime * 10 + piggybank.quarter * 25
        + piggybank.dollar * 100;

    return total_pennys;

}


int main()
{
    
    int total_pennys = calculate_pennys(read_money());

    cout << "total pennys in the piggy banl is: " << total_pennys << endl;
    cout << "total dollars in the piggy bank is: " << (float)total_pennys / 100 << endl;


}
