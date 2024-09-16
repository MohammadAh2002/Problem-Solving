/*

    Write a program to print the Minimum and Maximum Numbers in Matrix

    Matrix:
    77       5      12
    22      20       6
    14       3       9

    Minimum Number is:
    3

    Max Number is:
    77

*/

#include <iostream>
#include <iomanip>

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

            printf("%0*d    ", 2, matrix[i][j]);

        }

        cout << endl;

    }
}

int MinNumberInMatrix(int matrix[3][3], int rows, int colms){

    int MinNum = matrix[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            if (matrix[i][j] < MinNum)
                MinNum = matrix[i][j];

        }
    }

    return MinNum;

}

int MaxNumberInMatrix(int matrix[3][3], int rows, int colms) {

    int MaxNum = matrix[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            if (matrix[i][j] > MaxNum)
                MaxNum = matrix[i][j];

        }
    }

    return MaxNum;
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3];

    FillTheMatrix(matrix, 3, 3);
   
    cout << "matrix:\n";
    PrintTheMatrix(matrix, 3, 3);

    cout << "the smallest number in the matrix is: " << MinNumberInMatrix(matrix, 3, 3) << endl;

    cout << "the biggest number in the matrix is: " << MaxNumberInMatrix(matrix, 3, 3) << endl;


    return 0;
}

