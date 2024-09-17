/*

    Write a program to read a string then Print Each Word in that String.

    Pleas Enter your string:
    Mohammad Ahmad 2002 Github Programming

    Your string words are:
    Mohammad
    Ahmad
    2002
    Github
    Programming

*/

#include <iostream>
#include <string>

using namespace std;

string readstring() {

    string s;

    getline(cin, s);

    return s;
}

void PrintEveryWordInString(string s) {

    string word = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            word += s[i];
        }
        else if (s[i] == ' ' && word != "")
        {
            cout << word << endl;
            word = "";
        }
    }

    cout << word;

}

int main()
{
    string s1;

    cout << "what is the string: ";
    s1 = readstring();

    cout << "vowels in the string is:\n";
    PrintEveryWordInString(s1);

    return 0;
}
