/*

	Write heap-based implementations for three required string functions:

	- append This function takes a string and a character and appends the character
	to the end of the string.
	- concatenate This function takes two strings and appends the characters of the
	second string onto the first.
	- characterAt This function takes a string and a number and returns the character
	at that position in the string (with the first character in the string numbered zero).
	
	Write the code with the assumption that characterAt will be called frequently,
	while the other two functions will be called relatively seldom. The relative efficiency of
	the operations should reflect the calling frequency.

*/

#include <iostream>

using namespace std;

using ArrayString = char*;

int Length(ArrayString s) {

	int OriginalLength = 0;

	while (s[OriginalLength] != 0) {

		OriginalLength++;
		
	}

	return OriginalLength;

}

void Append(ArrayString & s, char c) {
	
	int OriginalLength = Length(s);

	ArrayString News = new char[OriginalLength + 2];

	for (int i = 0; i < OriginalLength; i++) {

		News[i] = s[i];

	}

	News[OriginalLength] = c;
	News[OriginalLength + 1] = 0;
	delete[] s;
	s = News;
	
}

char CharacterAt(char* s, int Position) {

	return s[Position];

}

void Concatenate(ArrayString& s1, ArrayString s2) {

	short s1Length = Length(s1);
	short s2Length = Length(s2);

	ArrayString NewS = new char[s1Length + s2Length + 1];

	char a;

	for (int i = 0; i < s1Length; i++) {

		NewS[i] = s1[i];

	}
	for (int i = 0; i < s2Length; i++) {

		NewS[s1Length + i] = s2[i];

	}

	NewS[s1Length + s2Length] = 0;
	delete[] s1;
	s1 = NewS;

}

int main()
{
  
	ArrayString s1 = new char[9];
	s1[0] = 'M'; s1[1] = 'o'; s1[2] = 'h'; s1[3] = 'a'; s1[4] = 'm'; s1[5] = 'm';
	s1[6] = 'a'; s1[7] = 'd'; s1[8] = 0;

	ArrayString s2 = new char[6];
	s2[0] = 'A'; s2[1] = 'h'; s2[2] = 'm'; s2[3] = 'a'; s2[4] = 'd'; s2[5] = 0;

	Concatenate(s1,s2);

	for (int i = 0; i < 13; i++) {

		cout << s1[i];

	}



	return 0;
}
