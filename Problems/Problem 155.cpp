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

using namespace std;


void PrintWordsInString(string s, string sprator = " ") {

	string word = "";
	int spratorpos = 0;

	while ((spratorpos = s.find(sprator)) != string::npos) {

		word = s.substr(0, spratorpos);

		if (word != "")
			cout << word << endl;

		s = s.erase(0, spratorpos + sprator.length());
	
	}

	if (s != "")
		cout << s << endl;

}


int main()
{


	string s = "mohammad ahmad 2002 programming";

	cout << "your string words are:\n";
	PrintWordsInString(s, " ");




	return 0;

}
