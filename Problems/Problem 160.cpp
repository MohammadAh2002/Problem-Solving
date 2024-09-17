/*

	Write a program to read a string then make a function to Split Each Word in Vector.

	Pleas Enter your string:
	Mohammad Ahmad 2002 Github Programming

	Your string wrords are:
	Tokens = 5
	Mohammad
	Ahmad
	2002
	Github
	Programmin

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void PutEachWordInVectr(string S1, vector <string>& vword, string gdelim = " ")
{
	
	cout << "\nYour string wrords are: \n\n";
	short pos = 0;
	string sWord; // define a string variable
	// use find() function to get the position of the delimiters
	while ((pos = S1.find(gdelim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vword.push_back(sWord);
		}
		S1.erase(0, pos + gdelim.length()); /* erase() until
	   positon and move to next word. */
	}
	if (S1 != "")
	{
		vword.push_back(S1);
	}
}

void printvector(vector <string>& vword) {

	cout << "tokens: " << vword.size() << endl;

	for (int i = 0; i < vword.size(); i++) {

		cout << vword[i] << endl;

	}
}

int main()
{

	string s1;

	vector <string> vs1;

	cout << "enter a string: ";
	getline(cin, s1);

	PutEachWordInVectr(s1, vs1);

	printvector(vs1);

	return 0;

}
