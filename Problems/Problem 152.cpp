/*

    Write a program to read a character the check if it is a Vowel or Not.
    Vowel are: a , e , I , o , u.

    Pleas Enter a Character:
    a

    Yes Letter 'a' is Vowel

*/

#include <iostream>
#include <string>
using namespace std;

bool CheckIfVowels(char c) {

    c = tolower(c);

    return ((c == 'a') || (c == 'i') || (c == 'e')
        || (c == 'u') || (c == 'o'));
    
}

int main()
{

    char C1;

    cout << "what is the charater: ";
    cin >> C1;

    if (CheckIfVowels(C1))
        cout << "yes latter " << C1 << " is vowel" << endl;
    else
        cout << "no latter " << C1 << " is not vowel" << endl;


    return 0;
}
