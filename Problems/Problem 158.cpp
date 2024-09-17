/*

    Write a program to read a string then Count Each Word in that String.

    Pleas Enter your string:
    Mohammad Ahmad 2002 Github Programming

    The number of words in your string is:
    5

*/

#include <iostream>
#include <string>

using namespace std;

string readstring() {

    string s;

    getline(cin, s);

    return s;
}

int PrintEveryWordInString(string s) {

    string word = "";
    int count = 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            word += s[i];
        }
        else if (s[i] == ' ' && word != "")
        {
            count++;
            word = "";
        }
    }

    return count;

}

int main()
{
    string s1;

    cout << "what is the string: ";
    s1 = readstring();

    cout << "the number of word in the string is: " << PrintEveryWordInString(s1) << endl;

    return 0;
}
