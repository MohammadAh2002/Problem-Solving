/*

    Consider an array representing a binary string, where every element’s data
    value is 0 or 1. Write a bool function to determine whether the binary string
    has odd parity (an odd number of 1 bits). Hint: Remember that the recursive
    function is going to return true (odd) or false (even), not the count of 1 bits.
    Solve the problem first using iteration, then recursion.

*/

#include <iostream>

using namespace std;

bool UsingLoop(string BinaryString) {

    int OneBitsNumber = 0;

    for (int i = 0; i < BinaryString.length(); i++) {

        if (BinaryString[i] == '1')
            OneBitsNumber++;

    }

    return OneBitsNumber % 2;

}

bool UsingRecursion(string BinaryString,int index = 0) {

    if (index >= BinaryString.length())
        return false;

    return (BinaryString[index] == '1') ^ UsingRecursion(BinaryString, index + 1);

}

int main()
{
    
    string BinaryString = "11001010010101100101";
 
    cout << "Iterative = " << UsingLoop(BinaryString) << endl;

    cout << "Recursive = " << UsingRecursion(BinaryString) << endl;

    return 0;
}
