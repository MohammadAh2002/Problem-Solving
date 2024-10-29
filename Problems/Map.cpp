/*

    Use C++ map.

*/

#include <iostream>
#include <map>

using namespace std;

int main()
{
   
    // Declare a map with string keys and int values
    map<string, int> studentGrades;

    // Inserting grades for three students
    studentGrades["Ali"] = 77;  
    studentGrades["Ahmed"] = 85;
    studentGrades["Fadi"] = 95; 

    cout << "\nPrinting all map values..\n\n";

    // Iterating over the map
    for (const auto& pair : studentGrades) {
        cout << "Student: " << pair.first << ", Grade: " << pair.second << endl;
    }

    // Finding the grade for a specific student
    string studentName = "Fadi";

    if (studentGrades.find(studentName) != studentGrades.end()) {
        cout << studentName << "'s grade: " << studentGrades[studentName] << endl;
    }
    else {
        cout << "Grade not found for " << studentName << endl;
    }

    return 0;

}
