/*

    Write a program to read a string then count Small / Capital letters in that string.

    Pleas Enter your string:
    Mohammad Ahmad

    String Length = 14
    Capital Letters Count = 2
    Small Letters Count = 11

*/

#include <iostream>
#include <string>
using namespace std;

string ReadChar() {

    string s1;

    getline(cin, s1);

    return s1;
}

char InvertChar(char c1) {

    return isupper(c1) ? tolower(c1) : toupper(c1);

}

int CountCapitaLatter(string S1) {

    int count = 0;

    for (int i = 0; i < S1.length(); i++) {

        if (isupper(S1[i]))
            count++;

    }

    return count;

}

int CountSmallLatter(string S1) {

    int count = 0;

    for (int i = 0; i < S1.length(); i++) {

        if (islower(S1[i]))
            count++;

    }

    return count;

}

int main()
{

    string C1;

    cout << "what is your string: ";
    C1 = ReadChar();

   
    cout << "string lenth is: " << C1.length() << endl;
    cout << "the cpital latters in the string is: " << CountCapitaLatter(C1) << endl;
    cout << "the small latters in the string is: " << CountSmallLatter(C1) << endl;



    return 0;
}
