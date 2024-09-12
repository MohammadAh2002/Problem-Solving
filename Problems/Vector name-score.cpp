/*

    get players names and score in vector then ask the user if he want to serch player name
    or score after that print the player score and name.

*/

#include <iostream>
#include <vector>

using namespace std;

bool check_rpeated(string name, vector <string>& names) {// m,g,f

    for (string& s : names) {

        if (s == name)
            return true;
        
    }

    return false;

}

void read_vector(vector <int>& scores, vector <string>& names) {

    int score;
    string name;

    while (true) {

        cout << "\nenter a name: ";
        cin >> name;

        if (check_rpeated(name, names)) {
            cout << "error: the name rpeated.\n";
            continue;

        }

        cout << "\nenter a score: ";
        cin >> score;

        if (score == 0 && name == "noname") {
            break;
        }
            names.push_back(name);
            scores.push_back(score);
      
    }

}

void print_vector(vector <int>& scores, vector <string>& names) {

    int i = 0;

    while (i < names.size()) {

        cout << '\n' << names[i] << " " << scores[i] << ".\n";
        i++;

    }

}

void serch_by_name(vector <int>& scores, vector <string>& names, string pickedname) {

    int i = 0;

    while (i < names.size()) {

        if (pickedname == names[i]) {

            cout << "the name is: " << names[i];
            cout << " the score is: " << scores[i] << endl;
            return;
        }

        i++;

    }

    cout << "name not found\n";

}

void serch_by_score(vector <int>& scores, vector <string>& names, int pickedscore) {

    int i = 0;

    while (i < scores.size()) {

        if (pickedscore == scores[i]) {

            cout << "the name is: " << names[i];
            cout << " the score is: " << scores[i] << endl;
            return;
        }

        i++;
    }

    cout << "score not found\n";

}

void search_in_vector(vector <int>& scores, vector <string>& names)

{

    string pickedname;
    char search;
    int pickedscore;
    bool another_search;

    do {

        cout << "you want to serch in vector by name or by score?(n/s): ";
        cin >> search;

        switch (tolower(search))
        {
        case 's':
            cout << "what is the score you want: ";
            cin >> pickedscore;
            serch_by_score(scores, names, pickedscore);
            break;
        case 'n':
            cout << "what is the name you want: ";
            cin >> pickedname;
            serch_by_name(scores, names, pickedname);
            break;
        default:
            cout << "this is not a serch method.";
            break;

        }

        cout << "do you want to search for another one([1]yes,[0]no): ";
        cin >> another_search;

    } while (another_search);
}

int main()
{


    vector <int> scores;
    vector <string> names;

    read_vector(scores, names);

    print_vector(scores, names);

    search_in_vector(scores, names);

    return 0;

}