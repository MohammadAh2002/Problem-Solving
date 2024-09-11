/*
    
    Find in String:
    1- Longest Word
    2- Shortest Word
    3- Numbers Of Vowels
    4- Word with the Most Number of Vowelss
    5- any other things you can Find

*/

#include <iostream>
#include <vector>

using namespace std;

string FindLongestWord(string Text) {

    int Position = 0;
    string LongestWord = "", Textsubstr;

    while (Position != string::npos) {

        Position = Text.find(' ');
    
        if (Position != string::npos) {

            Textsubstr = Text.substr(0, Position);

            if (Textsubstr.length() > LongestWord.length()) {

                LongestWord = Textsubstr;

            }

        }
        
        Text = Text.substr(Position + 1);
    }

    if (Text != "") {

        if (Text.length() > LongestWord.length()) {

            LongestWord = Text;

        }
       
    }

    if (ispunct(LongestWord[LongestWord.length() - 1]))
        LongestWord.erase(LongestWord.length() - 1);

    return LongestWord;

}

vector <string> FindLongestWords(string Text, bool Repeats = false) {

    int Position = 0, LongestWordLength = FindLongestWord(Text).length();
    string Textsubstr;
    vector <string> LongestWords;

    while (Position != string::npos) {

        Position = Text.find(' ');

        if (Position != string::npos) {

            Textsubstr = Text.substr(0, Position);

            if (ispunct(Textsubstr[Textsubstr.length() - 1]))
                Textsubstr.erase(Textsubstr.length() - 1);

            if (LongestWordLength == Textsubstr.length()) {

                if (find(LongestWords.begin(), LongestWords.end(), Textsubstr) != LongestWords.end()) {

                    if (Repeats) {

                        LongestWords.push_back(Textsubstr);
                    
                    }

                    Text = Text.substr(Position + 1);
                    continue;
                }

                LongestWords.push_back(Textsubstr);

            }

        }

        Text = Text.substr(Position + 1);
    }

    return LongestWords;

}

string FindShortestWord(string Text) {

    int Position = 0;
    string ShortestWord, Textsubstr;

    Position = Text.find(' ');

    if (Position != string::npos) {

        ShortestWord = Text.substr(0, Position);

    }

    while (Position != string::npos) {

        Position = Text.find(' ');

        if (Position != string::npos) {

            Textsubstr = Text.substr(0, Position);

            if (Textsubstr.length() < ShortestWord.length()) {

                ShortestWord = Textsubstr;

            }
        }

      
        Text = Text.substr(Position + 1);
    }
    if (Text != "") {

        if (Text.length() < ShortestWord.length()) {

            ShortestWord = Text;

        }

    }

    if (ispunct(ShortestWord[ShortestWord.length() - 1]))
        ShortestWord.erase(ShortestWord.length() - 1);

    return ShortestWord;


}

vector <string> FindShortestWords(string Text, bool Repeats = false) {

    int Position = 0, ShortestWordLength = FindShortestWord(Text).length();
    string Textsubstr;
    vector <string> ShortestWords;

    while (Position != string::npos) {

        Position = Text.find(' ');

        if (Position != string::npos) {

            Textsubstr = Text.substr(0, Position);

            if (ispunct(Textsubstr[Textsubstr.length() - 1]))
                Textsubstr.erase(Textsubstr.length() - 1);

            if (Textsubstr.length() == ShortestWordLength) {

                if (find(ShortestWords.begin(), ShortestWords.end(), Textsubstr) != ShortestWords.end()) {

                    if (Repeats) {

                        ShortestWords.push_back(Textsubstr);

                    }

                    Text = Text.substr(Position + 1);
                    continue;
                }

                ShortestWords.push_back(Textsubstr);

            }

        }

        Text = Text.substr(Position + 1);
    }

    return ShortestWords;

}

bool isVowel(char ch) {

    ch = tolower(ch);

    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

}

int  NumberOfVowels(string Text) {

    int NumberOfVowels = 0;
    
    for (int i = 0; i < Text.length(); i++) {

        if (isVowel(Text[i]))
            NumberOfVowels++;

    }

    return NumberOfVowels;

}

string FindWordWithMostVowels(string Text) {
    
    int Position = 0, VowelsNumber = 0, BiggestVowelNumber = 0;
    string WordWithMostVowels, Textsubstr;

    while (Position != string::npos) {

        Position = Text.find(' ');

        if (Position != string::npos) {

            Textsubstr = Text.substr(0, Position);

            VowelsNumber = NumberOfVowels(Textsubstr);

            if (VowelsNumber > BiggestVowelNumber) {

                BiggestVowelNumber = VowelsNumber;
                WordWithMostVowels = Textsubstr;

            }

        }

        Text = Text.substr(Position + 1);
        
    }

    if (Text != "") {
        
        VowelsNumber = NumberOfVowels(Text);

        if (VowelsNumber > BiggestVowelNumber) {

            BiggestVowelNumber = VowelsNumber;
            WordWithMostVowels = Text;

        }
    }

    if (ispunct(WordWithMostVowels[WordWithMostVowels.length() - 1])) 
            WordWithMostVowels.erase(WordWithMostVowels.length() - 1);

    return WordWithMostVowels;

}

int main()
{
    string Text = "Hi i am Mohammad i am 21 Years old, i Live in Jerusalem, i am a Programmer, this Question is From Think Like a Programmer Book";

    cout << "Word With the Most Vowels: " << FindWordWithMostVowels(Text);
    
    cout << "\nNumber of Vowels in the Text: " << NumberOfVowels(Text);
    
    cout << "\nLongest Word: " << FindLongestWord(Text);

    cout << "\nShortest Word: " << FindShortestWord(Text);

    vector <string> LongestWords = FindLongestWords(Text);

    cout << "\nLogest Words in the Text:\n";
    for (string s : LongestWords) {

        cout << s << "\n";
    }

    vector <string> ShortestWords = FindShortestWords(Text);

    cout << "\Shortest Words in the Text:\n";
    for (string s : ShortestWords) {

        cout << s << "\n";
    }

    return 0;

}
