/*

	Change the implementation of our strings such that location[0] in the array
	stores the size of the array (and therefore location[1] stores the first actual
	character in the string), rather than using a null-character terminator.
	Implement each of the three functions, append, concatenate, and charactertAt,
	taking advantage of the stored size information whenever possible. Because
	we’ll no longer be using the null-termination convention expected by the
	standard output stream, you’ll need to write your own output function that
	loops through its string parameter, displaying the characters.

*/

#include <iostream>

using namespace std;

using ArrayString = char*;

void Append(ArrayString& s, char c) {

	ArrayString News = new char[(int)s[0] + 2];

	for (int i = 1; i <= (int)s[0]; i++) {

		News[i] = s[i];

	}

	News[0] = (int)s[0] + 1;

	News[News[0]] = c;

	delete[] s;

	s = News;

}

char CharacterAt(char* s, int Position) {

	return s[Position];

}

void Concatenate(ArrayString& s1, ArrayString s2) {

	ArrayString NewS = new char[(int)s1[0] + (int)s2[0] + 1];

	for (int i = 1; i <= (int)s1[0]; i++) {
		 
		NewS[i] = s1[i];

	}
	for (int i = 1; i <= (int)s2[0]; i++) {

		NewS[(int)s1[0] + i] = s2[i];

	}

	NewS[0] = (int)s1[0] + (int)s2[0];

	delete[] s1;

	s1 = NewS;

}

int main()
{

	ArrayString s1 = new char[9];
	s1[0] = 8; s1[1] = 'M'; s1[2] = 'o'; s1[3] = 'h'; s1[4] = 'a'; s1[5] = 'm';
	s1[6] = 'm'; s1[7] = 'a'; s1[8] = 'd';

	ArrayString s2 = new char[6];
	s2[0] = 5; s2[1] = 'a'; s2[2] = 'h'; s2[3] = 'm'; s2[4] = 'a'; s2[5] = 'd';

	Append(s1,'!');
	cout << "\n\Append:\n";
	for (int i = 1; i <= (int)s1[0]; i++) {

		cout << s1[i];

	}

	Concatenate(s1,s2);
	cout << "\n\nConcatenate:\n";
	for (int i = 1; i <= (int)s1[0]; i++) {

		cout << s1[i];

	}

	return 0;

}
