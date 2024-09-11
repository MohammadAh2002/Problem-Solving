/*

    Write a Program That Repalce Word With Another in Text

*/

#include <iostream>

using namespace std;

string ReplaceWord(string Text, string OriginalWord, string Replacment) {

    int Postion = 0;

    while (true) {

        Postion = Text.find(OriginalWord);
        
        if (Postion == string::npos)
            break;

        Text.replace(Postion, OriginalWord.length(), Replacment);

    }

    return Text;

}

int main()
{
   
    string Text = "This Film is the Best Film of the Year";
    string Replacment = "Movie";

    cout << "The Text After Replacing Film With Movie: " << ReplaceWord(Text, "Film", Replacment);

    return 0;
}
