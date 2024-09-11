/*

	ISBN Check Digit For The 13-Digit ISBN

	How The ISBN Check Digit Is Calculated

	This is the process:

	1- Take the first 12 digits of the 13-digit ISBN
	2- Multiply each number in turn, from left to right by a number.
	   The first digit is multiplied by 1, the second by 3, the third by 1 gain,
	   the fourth by 3 again,
	   and so on to the eleventh which is multiplied by 1 and the twelfth by 3.
	3- Add all of the 12 answers.
	4- Do a modulo 10 division on the result from step 3.
	5- Take that remainder result from step 4.If it's a zero,
	then the check digit is zero.
	If the remainders isn't zero then subtract the remainder from 10.
	The answer to that is your check digit.
		
*/

#include <iostream>
#include <string>

using namespace std;

int calculateCheckSum (string IsbnNumber) {

	int sum = 0;
	
	for (int i = 0; i < IsbnNumber.length() - 1; i++) {

		if (i % 2 == 0) {

			sum += (int)(IsbnNumber[i] - '0');

		}
		else {

			sum += ((int)(IsbnNumber[i] - '0') * 3);
		}
	}

	return sum;

}

bool ISBN13Validate(int CheckSum, int& CheckDigit,char IsbnLastDigit) {

	CheckDigit = CheckSum % 10;

	if (CheckDigit != 0) {
		
		CheckDigit = 10 - CheckDigit;

	}

	return CheckDigit == 0 || CheckDigit == int(IsbnLastDigit - '0');
}

int main()
{
   
	string IsbnNumber;

	cin >> IsbnNumber;

	int CheckSum = calculateCheckSum(IsbnNumber);

	int CheckDigit;

	if (ISBN13Validate(CheckSum, CheckDigit, IsbnNumber[13])) {

		cout << "The ISBN Number is Valid.";
		cout << "The Check Digit is:" << CheckDigit;
	}
	else {

		cout << "The ISBN Number is not Valid.";

	}
	return 0;

}
