/*

    Design a class or set of classes for use in a program that maintains a class roster. For
    each student, store the student’s name, ID, and final grade score in the range 0–100.
    The program will allow student records to be added or removed; display the record of
    a particular student, identified by ID, with the grade displayed as a number and as a
    letter; and display the average score for the class. The appropriate letter grade for a
    particular score is shown in Table 5-1.

*/

#include <iostream>

using namespace std;

class Student {

public:

    Student(){
        SetID(-1);
        SetName("");
        SetGrade(0);
    
    }

    Student(int ID, string Name, double Grade) {

        SetID(ID);
        SetName(Name);
        SetGrade(Grade);

    }

    int ID() { return this->_ID; }
    void SetID(int NewID) {
        this->_ID = NewID;
    }

    string Name() { return this->_Name; };
    void SetName(string NewName) {
        this->_Name = NewName;
    }

    double Grade() { return this->_Grade; };
    void SetGrade(double NewGrade) {
        if(IsValidGrade(NewGrade))
        this->_Grade = NewGrade;
    }

    string LetterGrade() {

        if (IsValidGrade(_Grade))
            return "invalid Grade";

        const string GradeLetter[] = {"F","D","D+","C-","C","C+","B-","B","B+","A-","A"};
        const short GradeScore[] =   { 0,  60, 67,  70,  73, 77,  80,  83, 87,  90,  93};

        short Category = 0;
        while (Category < 11 && GradeScore[Category] <= _Grade)
            Category++;

        return GradeLetter[Category - 1];

    }

    bool IsValidGrade(double Grade) {

        if (_Grade >= 0 && _Grade <= 100)
            return true;

        return false;
    }

private:
    int _ID;
    string _Name;
    double _Grade;

};

class StudentCollection {

private:

    class StudentList{
    public:
        Student StudentData;
        StudentList* Next;
    };
    StudentList* ListHead;

public:

    ~StudentCollection() {

        Clear();

    }

    bool AddRecord(Student NewStudent) {

        StudentList* NewNode = new StudentList;
        NewNode->StudentData = NewStudent;
        NewNode->Next = NULL;

        if (ListHead == NULL) {

            ListHead = NewNode;
            return true;
        }

        StudentList* Current = ListHead;

        while (Current->Next != NULL)
        {
            Current = Current->Next;
        }

        Current->Next = NewNode;
        return true;
    }

    bool RemoveRecord(int ID) {

        if (ListHead == NULL)
            return true;

        StudentList* Current = ListHead;

        if (ListHead->StudentData.ID() == ID) {

            Current = ListHead;
            ListHead = ListHead->Next;
            delete Current;
            return true;

        }

        StudentList* previous = ListHead;

        while (Current->StudentData.ID() != ID) {

            previous = Current;
            Current = Current->Next;

        }

        if (Current == NULL)
            return false;

        previous->Next = Current->Next;

        delete Current;
        return true;

    }

    Student RcordWithNumber(int ID) {

        StudentList* Current = ListHead;

        while (Current->StudentData.ID() != ID && Current != NULL) {

            Current = Current->Next;

        }

        if (Current == NULL)
            return Student();

        return Current->StudentData;
    }

    void Clear() {

        StudentList* Current = ListHead;

        while (ListHead != NULL){

            Current = ListHead;
            ListHead = ListHead->Next;
            delete Current;

        }

    }

};

int main()
{

    return 0;

}
