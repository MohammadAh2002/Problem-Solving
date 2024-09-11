
/*

    read a char the represent a number 0-9, Convert This Char to an Real integer.
    
*/

#include <iostream>

using namespace std;

int ConvertChatDigitToInt(char Digit) {

    return Digit - '0';

}

int main()
{

    char Digit;

    cout << "Enter one-Digit Number: ";
    Digit = cin.get();

    cout << "The Result in Integer is: " << ConvertChatDigitToInt(Digit);

    return 0;
}
