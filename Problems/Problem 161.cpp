/*

    Write a program to read a Character then invert it's case and Print it.

    Pleas Enter a Character:
    a

    Char after inverting case:
    A

*/

#include <iostream>

using namespace std;

char ReadChar() {

    char s1;

    cin >> s1;

    return s1;
}

char InvertChar(char c1) {

    return isupper(c1) ? tolower(c1) : toupper(c1);

}

int main()
{
    
    char C1;

    cout << "what is your string: ";
    C1 = ReadChar();

    C1 = InvertChar(C1);

    cout << "char after inverting: " << C1 << endl;

    return 0;
}
