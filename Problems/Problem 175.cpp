/*

	Write a program to Remove all Punctuations from a string
 
	Original  String:
	Welcome to Palestine, Palestine is a nice country it's amazing

	Punctuations Removed:
	Welcome to Palestine, Palestine is a nice country its amazing

*/

#include <iostream>

using namespace std;

string RemovePunctions(string s1) {

	string NewWord = "";

	for (int i = 0; i < s1.length(); i++) {

		if (!(s1[i] >= 33 && s1[i] <= 47)) {

			NewWord += s1[i];
			
		}
		
	}

	return NewWord;

}

int main()
{
   
	string s1 = "welcome to palstine, palstine is a nice country, its amazing.";

	cout << "the string after edit:\n";
	cout << RemovePunctions(s1) << endl;










	return 0;
}
