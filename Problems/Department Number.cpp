/*
    
    in out City We have 3 Departments
    1- Police
    2- Fire
    3- Sanitation

    - Every Department Should Get A number From  1-7
    - each Department Has unique Number
    - The Sum Of The Deparments Numbers Should be 12
    - Police Should Get an Even Number

    Write a Perogram That Give as All The possibilities For Numbering The Departments

*/

#include <iostream>

using namespace std;

int main()
{
   
    for (int Police = 1; Police <= 7; Police++) {

        if (Police % 2 == 1) 
            continue;

        for (int Fire = 1; Fire <= 7; Fire++) {

            if(Fire == Police)
                continue;

            for (int Sanitation = 1; Sanitation <= 7; Sanitation++) {

                if (Sanitation == Police || Sanitation == Fire)
                    continue;

                if ((Police + Fire + Sanitation) == 12) {

                    cout << "Police = " << Police << ", Fire = " << Fire << ", Sanitation = " << Sanitation << endl;

                }

            }
        }

    }

    return 0;

}
