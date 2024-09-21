/*

    Write a program to join Vector of strings into a one string with separators

    Vector after join:
    Mohammad###Faid###Ali###Maher

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string JoinString(vector <string>& vstring, string spareter) {

    string word = "";

    for (string& s : vstring) {

        word += s + spareter;
    }

    return word.substr(0,word.length()-spareter.length());

}

int main()
{
    
    vector <string> V1 = { "mohammad","ahmad","2002","programming"};

    cout << "vector after join:\n";
    cout << JoinString(V1, ",") << endl;

    return 0;
}
