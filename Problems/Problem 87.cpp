/*

    Program to Calculate the Sum of All Even Numbers Between 1 and 100.

*/

#include <iostream>
using namespace std;


int main()
{
    int sum_even_number = 0;

    for (int i = 1; i <= 100; i++) {

        if (i % 2 == 0)
            sum_even_number += i;
    }

    cout << "the sum of the evens numbers is: " << sum_even_number << endl;

    return 0;

}
