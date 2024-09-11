/*
	
	Check if the Number is Palindrome.

*/

#include <iostream>

using namespace std;

int ReversNumber(int Num) {

	int ReversedNumber = 0;
	short LastDigit;

	while (Num > 0) {
		
		LastDigit = Num % 10;

		ReversedNumber = ReversedNumber * 10 + LastDigit;
		
		Num /= 10;
	}
	
	return ReversedNumber;
}

bool isPalindromeNumber(int Num) {

	if (Num < 0 || Num != 0 && Num % 10 == 0)
		return false;

	return Num == ReversNumber(Num);
		

}

int main()
{
   
	if (isPalindromeNumber(1234567899))
		cout << "true";
	else
		cout << "false";

	return 0;
}
