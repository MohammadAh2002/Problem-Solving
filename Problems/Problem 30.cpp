/*

    Write a program to ask the user to enter:
    • Number1, Number2, Number3
    Then Print the Sum of entered numbers
    
    Example Inputs:
    10
    20
    30

    Outputs:
    60


*/

#include <iostream>
using namespace std;

void read_3_nums(int numbers[3]) {

    for (int i = 0; i < 3; i++ ) {

        cout << "what is number[" << i + 1 << "]?\n";
        cin >> numbers[i];

    }
}

int sum_3_nums(int numbers[3]) {

    int  sum = 0;

    for (int i = 0; i < 3; i++) {

        sum += numbers[i];

    }

    return sum;

}

void print_the_sum(int thesum) {

    cout << "the sum of the numbers you enterd is: " << thesum << endl;


}


int main()
{
    
    int numbers[3];

    read_3_nums(numbers);

    print_the_sum(sum_3_nums(numbers));

}
