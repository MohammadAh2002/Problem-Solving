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
#include <vector>

using namespace std;

vector <string> PutStringWordsInVector(string s, string sprator = " ") {

	string word = "";
	int spratorpos = 0;
	vector <string> svector;

	while ((spratorpos = s.find(sprator)) != string::npos) {

		word = s.substr(0, spratorpos);

		if (word != "")
			svector.push_back(word);

		s = s.erase(0, spratorpos + sprator.length());

	}

	if (s != "")
		svector.push_back(s);

	return svector;
}

int main()
{

	string s = "mohammad ahmad 2002 programming";
	
	vector <string> v1;
	
	v1 = PutStringWordsInVector(s);

	cout << "tokens = " << v1.size() << endl;

	for (string& s : v1)
		cout << s << endl;

	return 0;

}
