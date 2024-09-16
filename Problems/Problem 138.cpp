/*

    Write a program to compare two matrices and check if they are typical or not

    Matrix 1:
    03   06   03
    05   01   10
    07   05   02
 
    Matrix 2:
    03   05   07
    09   06   09
    03   08   03

    No: Matrices are NOT Typical

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

            matrix[i][j] = RandomNumber(1, 10);

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

bool CheckIfMatricesIsTypicall(int matrix[3][3], int matrix2[3][3], int rows, int colms) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            if (matrix[i][j] != matrix2[i][j])
                return false;
        }
    }

    return true;

}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3], matrix2[3][3];

    FillTheMatrix(matrix, 3, 3);
    FillTheMatrix(matrix2, 3, 3);

    cout << "matrix:\n";
    PrintTheMatrix(matrix, 3, 3);

    cout << "matrix2:\n";
    PrintTheMatrix(matrix2, 3, 3);

    if (CheckIfMatricesIsTypicall(matrix, matrix2, 3, 3))
        cout << "the matrices are typical\n";
    else
        cout << "the matrices are not typical\n";

    cout << endl;

    return 0;
}

