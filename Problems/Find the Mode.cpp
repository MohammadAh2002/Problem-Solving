/*

   In statistics, the mode of a set of values is the value that appears most often.

   Write code that processes an array of survey data, where the survey takers
   have responded to a question with a number in the range 1-10, to determine the
   mode of the data set. For our purpose, if multiple modes exist, any may be chosen.

*/

#include <iostream>
#include <chrono>

using namespace std;

const int ArraySize = 12;

int main()
{
    
    int TheArray[ArraySize] = {4,7,3,8,9,7,4,9,9,2,3,10};

    int MostFrequentNumber = 0, CurrentFrequency = 0, HighestFrequency = 0;

    for (int i = 0; i < ArraySize; i++) {
       
        CurrentFrequency++;

        for (int j = 0; j < ArraySize; j++) {

            if (TheArray[j] == TheArray[i] && TheArray[j] != MostFrequentNumber) {

                CurrentFrequency++;

                if (CurrentFrequency > HighestFrequency) {
                    
                    MostFrequentNumber = TheArray[j];
                    HighestFrequency = CurrentFrequency;
                }
            }

        }

        CurrentFrequency = 0;

    }

    cout << "the Mode is: " << MostFrequentNumber << endl;

    return 0;

}
