/*

    Write a program to fill a 3*3 matrix with random numbers
    
    The following is a 3x3 random matrix :
    19      75      27
    12      60      80
    28       9      75

*/

#include <iostream>
#include<iomanip>


using namespace std;

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillTheMatrix(int matrix[3][3], int rows, int colms) {


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            matrix[i][j] = RandomNumber(1, 100);

        }
    }
}

void PrintTheMatrix(int matrix[3][3], int rows, int colms) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {

            cout << setw(3) << matrix[i][j] << " ";

        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    
    int Matrix[3][3];

    FillTheMatrix(Matrix, 3, 3);

    cout << "a Matrix filled with random numbers from 1 to 100:\n";

    PrintTheMatrix(Matrix, 3, 3);

    return 0;

}
