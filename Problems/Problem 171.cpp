/*

	Write a program to read string and reverse its word.

	Please Enter your string:
	Mohammad Ahmad I'm From Palestine

	String after reversing words:
	Palestine From I'm Ahmad Mohammad

*/

#include <iostream>
#include <string>

using namespace std;

string ReversString(string S1) {

	int i = S1.length() - 1;

	string NewWord = "";

	for (i; i >= 0; i--) {

		if (S1[i] == ' ') {

			NewWord += S1.substr(i + 1, S1.length()) + " ";
			S1.erase(i, S1.length());
		}
	}
	if (S1 != "")
		NewWord += S1;

	return NewWord;

}

int main()
{
   
	string S1 = "mohammmad ahmad 2002 programming";

	cout << "string after revers words:\n";
	cout << ReversString(S1) << endl;

	return 0;
}
