/*

	Write a program to Replace words in string

	Original String:
	Welcome to Palestine, Palestine is a nice country

	String After Replace:
	Welcome to USA, USA is a nice country

*/

#include <iostream>
#include <string>
using namespace std;

string ReplaceWords(string S1,string OriginalWord,string ReplaceWord) {

	string NewWord = "";

	int i = S1.find(OriginalWord);

	while (i != string::npos){

		i = S1.find(OriginalWord);

		NewWord += S1.substr(0, i) + ReplaceWord;

		S1 = S1.substr(i + OriginalWord.length(), S1.length() - 1);
	
	}

	NewWord = NewWord.substr(0,NewWord.length() - ReplaceWord.length());

	return NewWord;
}

int main()
{

	string S1 = "welcome to Palestine, Palestine is a nice country";

	cout << "string after replace:\n";
	cout << ReplaceWords(S1, "Palestine","usa") << endl;









	return 0;

}
