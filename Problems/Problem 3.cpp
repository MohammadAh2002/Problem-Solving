/*

	For our dynamically allocated strings, create a function substring that takes
	three parameters: an arrayString, a starting position integer, and an integer
	length of characters. The function returns a pointer to a new dynamically
	allocated string array. This string array contains the characters in the original
	string, starting at the specified position for the specified length. The original
	string is unaffected by the operation. So if the original string was abcdefg, the
	position was 3, and the length was 4, then the new string would contain cdef.

*/

#include <iostream>

using namespace std;

char* SubString(char* s, short StartPos, short Length) {

	char* New = new char[Length + 1];

	for (int i = 0; i < Length + StartPos + 1; i++){
		
		New[i] = s[StartPos + i - 1];

	}
	New[Length] = 0;

	return New;

}

int main()
{
   
	char* s = new char[8];
	s[0] = 'a'; s[1] = 'b'; s[2] = 'c'; s[3] = 'd'; s[4] = 'e'; s[5] = 'f'; s[6] = 'g',s[7] = 0;

	char* s2 = SubString(s,3,4);

	char c;
	for (int i = 0; i < 4; i++) {
		c = s2[i];
		cout << s2[i];
	}

	return 0;
}
