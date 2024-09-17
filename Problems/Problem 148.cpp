/*

    Write a program to read a string then Invert all its letter's case and print it. 
 
    Pleas Enter your string:
    mohammad AHMAD

    String after Invert All String Letter Case:
    MOHAMMAD ahmad

*/

#include <iostream>
#include <string>
using namespace std;

string ReadChar() {

    string s1;

    getline(cin,s1);

    return s1;
}

char InvertChar(char c1) {

    return isupper(c1) ? tolower(c1) : toupper(c1);

}

string InvertStringCharaters(string S1) {

    for (int i = 0; i < S1.length(); i++) {

        S1[i] = InvertChar(S1[i]);

    }

    return S1;

}

int main()
{

    string C1;

    cout << "what is your string: ";
    C1 = ReadChar();

    cout << "string after inverting: " << C1 << endl;

    C1 = InvertStringCharaters(C1);

    return 0;
}
