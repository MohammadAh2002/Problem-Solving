/*

    Reverse a Vector.

*/

#include <iostream>
#include <vector>

using namespace std;

void PrintIntVector(vector <int> v) {

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

void Swap2Int(int& a, int& b) {

    int temp;

    temp = a;
    a = b;
    b = temp;

}

vector <int> ReversIntVector(vector <int>& v1) {

    vector <int> v2;

    for (int i = v1.size(); i > 0; i--) {

        v2.push_back(v1[i - 1]);

    }

    return v2;

}

vector <int> ReversIntVectorUsingSwap(vector <int>& v1) {

    for (int i = 0; i < v1.size() / 2; i++) {

        Swap2Int(v1[i], v1[v1.size() - i - 1]);

    }

    return v1;

}

void Swap2Strings(string& a, string& b) {

    string temp;

    temp = a;
    a = b;
    b = temp;

}

void PrintStringVector(vector <string> v) {

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

vector <string> ReversStringVector(vector <string>& v1) {

    vector <string> v2;

    for (int i = v1.size(); i > 0; i--) {

        v2.push_back(v1[i - 1]);

    }

    return v2;

}

vector <string> ReversStringVectorUsingSwap(vector <string>& v1) {

    for (int i = 0; i < v1.size() / 2; i++) {

        Swap2Strings(v1[i], v1[v1.size() - i - 1]);

    }

    return v1;

}

int main()
{
    
    vector <int> v1 {1,3,5,7,9};
    vector <string> vs {"mohammad", "ahmad","2022"};

    cout << "the vector in revers order is: ";
    PrintIntVector(ReversIntVector(v1));

    cout << "\n\nthe vector in revers order is: ";
    PrintStringVector(ReversStringVector(vs));
    cout << endl;
}
