/*

    To make sure you are comfortable with qsort, write code that uses the function 
    to sort an array of our student struct. First have it sort by grade, and then try 
    it again using the student ID

*/

#include <iostream>

using namespace std;

struct student
{
    int grade;
    int studentID;
    string name;
};

int compareGrades(const void* A, const void* B)
{
    student* studentA = (student*)(A);
    student* studentB = (student*)(B);
    return (studentA->grade - studentB->grade);
}

int compareID(const void* A, const void* B)
{
    student* studentA = (student*)(A);
    student* studentB = (student*)(B);
    return (studentA->studentID - studentB->studentID);
}

int main()
{

    const int ARRAY_SIZE = 7;

    student studentArray[ARRAY_SIZE] = {
        {87, 10001, "Mohammad"},
        {28, 10002, "Fadi"},
        {100, 10003, "Abed"},
        {78, 10004, "Lean"},
        {84, 10005, "Ali"},
        {98, 10006, "Samer"},
        {75, 10007, "Omar"},
    };

    qsort(studentArray, ARRAY_SIZE, sizeof(student), compareGrades);
    std::cout << "Sorted by grade\n";

    int i = 1;
    for (student Student : studentArray)
    {

        cout << i << " - " << Student.studentID << ", " << Student.name << ", " << Student.grade << endl;

        i++;

    }

    qsort(studentArray, ARRAY_SIZE, sizeof(student), compareID);
    std::cout << "\nSorted by student ID\n";

    i = 1;
    for (student Student : studentArray)
    {

        cout << i << " - " << Student.studentID << ", " << Student.name << ", " << Student.grade << endl;
        i++;

    }

    return 0;

}
