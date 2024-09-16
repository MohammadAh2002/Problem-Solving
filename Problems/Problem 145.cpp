/*

    Write a program to check if the matrix is scalar or not

    Matrix:
    9       0       0
    0       9       0
    0       0       9

    YES: Matrix is Scala

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

bool CheckIfScalarMatrix(int matrix[3][3], int rows, int colms) {

    int ScalarNum = matrix[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            if (i == j && matrix[i][j] != ScalarNum) {

                return false;

            }
            else if (i != j && matrix[i][j] != 0) {

                return false;

            }

        }
    }

    return true;

}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3];

    int mtx[3][3] = { {5,0,0},{0,5,0},{0,0,5} };

    FillTheMatrix(matrix, 3, 3);

    cout << "matrix:\n";
    PrintTheMatrix(mtx, 3, 3);

    if (CheckIfScalarMatrix(matrix, 3, 3))
        cout << "the matrix is scalar\n";
    else
        cout << "the matrix is not scalar\n";

    cout << endl;

    return 0;
}

