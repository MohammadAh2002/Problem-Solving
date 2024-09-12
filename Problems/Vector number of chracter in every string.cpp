/*

	You Have A Vector of Strings Get How Many Characters in Each String. 

*/

#include <iostream>
#include <vector>

using namespace std;

void NumberOfChractersInEachString(vector <short>& v1, vector <string> v2) {

	for (int i = 0; i < v2.size(); i++) {

		v1.push_back(v2[i].length());

	}

}

int main()
{
   
	vector <string> v1 {"mohammad","ahmad","programming","xxx"};
	vector <short> v2;

	NumberOfChractersInEachString(v2, v1);

	for (int i = 0; i < v2.size(); i++) {

		cout << v2[i] << " ";

	}

	return 0;

}
