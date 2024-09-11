/*
   
    A message has been encoded as a text stream that is read character by
    character. The stream contains a series of comma-delimited integers, each
    a positive number capable of being represented by a C++ int. However, the
    character represented by a particular integer depends on the current
    decoding mode. There are three modes: uppercase, lowercase, and
    punctuation.
    
    In uppercase mode, each integer represents an uppercase letter: The
    integer modulo 27 indicates the letter of the alphabet (where 1 = A
    and so on). So an input value of 143 in uppercase mode would yeild the
    letter H because 143 modulo 27 is 8 and H is the eighth letter in the
    alphabet.
    
    The lowercase mode works the same but with lowercase lettters; the
    remainder of dividing the integer by 27 represents the lowercase letter
    (1 = a and so on). So an input value of 56 in lowercase mode would yeild
    the letter b because 57 modulo 27 is 2 and b is the second letter in the
    alphabet.
    
    In punctuation mode, the integer is instead considered a modulo 9, with
    the interpretation given by Table 2-3 below. So 19 would yeild an
    exclamation point because 19 modulo 9 is 1.
    
    At the beginning of each message, the decoding mode is uppercase letters.
    Each time a modulo operation (by 27 or 9, depending on the mode) results
    in 0, the decoding mode switches. If the current mode is uppercase, the
    mode switches to lowercase letters. If the current mode is lowercase, the
    mode switches to punctuations, and if it is punctuation, it switches back
    to uppercase.
    
    Punctuation Decoding Mode Table:

    Number      Symbol
    1           !
    2           ?
    3           ,
    4           .
    5           (space)
    6           ;
    7           "
    8           '

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum enMode { Uppercase = 1, Lowercase = 2, Punctuation = 3 };

vector<int> IntegersFromStringToInt(const vector<string>& SeparatedIntegersSeries) {
   
    vector<int> IntegersSeriesInInt;

    for (const string& num : SeparatedIntegersSeries) {
        IntegersSeriesInInt.push_back(stoi(num));
    }

    return IntegersSeriesInInt;
}

vector<string> SeparateNumbers(const string& IntegersSeries) {
 
    string Integer;

    vector <string> VInteger;

    for (int i = 0; i < IntegersSeries.length(); i++) {

        if (IntegersSeries[i] == ',') {

            VInteger.push_back(Integer);
            Integer = "";
            continue;
        }

        Integer += IntegersSeries[i];

    }

    return VInteger;

}

string DecodeMessage(const vector<int>& IntegersSeriesInInt) {
    
    string DecodedMessage;
    char DecodedChar;

    enum enMode { Uppercase = 1, Lowercase = 2, Punctuation = 3 };
    enMode Mode = Uppercase;

    for (int i = 0; i < IntegersSeriesInInt.size(); i++) {

        switch (Mode) {
        case Uppercase:
            DecodedChar = (IntegersSeriesInInt[i] % 27) + ('A' - 1);
           
            if ((IntegersSeriesInInt[i] % 27) == 0) {
                Mode = Lowercase;
                continue;
            }
            break;

        case Lowercase:
            DecodedChar = (IntegersSeriesInInt[i] % 27) + ('a' - 1);
            if ((IntegersSeriesInInt[i] % 27) == 0) {
                Mode = Punctuation;
                continue;
            }
            break;

        case Punctuation:

            switch ((IntegersSeriesInInt[i] % 9))
            {
            case 1: DecodedChar = '!'; break;
            case 2: DecodedChar = '?'; break;
            case 3: DecodedChar = ','; break;
            case 4: DecodedChar = '.'; break;
            case 5: DecodedChar = ' '; break;
            case 6: DecodedChar = ';'; break;
            case 7: DecodedChar = '"'; break;
            case 8: DecodedChar = '\''; break;
            }
            if ((IntegersSeriesInInt[i] % 9) == 0) {
                Mode = Uppercase;
                continue;
            }
            break;
        }

        DecodedMessage += DecodedChar;
    }

    return DecodedMessage;
}

int main() {

    string IntegersSeries = "18,12312,171,763,98423,1208,216,11,500,18,241,0,32,20620,27,10";

    vector<string> SeparatedIntegersSeries = SeparateNumbers(IntegersSeries);
    
    vector<int> IntegersSeriesInInt = IntegersFromStringToInt(SeparatedIntegersSeries);
    
    string Message = DecodeMessage(IntegersSeriesInInt);

    cout << "Decoded Message: " << Message << endl;

    return 0;
}
