/*

    Write a program to fill a 3*3 matrix with random numbers and them,
    then multiply them into a 3rd matrix and print it

    Matrix 1 :
    02   10   07
    01   07   09
    04   09   03
 
    Matrix 2
    10   05   07
    06   06   07
    03   05   06
 
    Result :
    20   50   49
    06   42   63
    12   45   1

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

void MultblyMatrix(int matrix1[3][3], int matrix2[3][3], int matrix3[3][3]) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            matrix3[i][j] = matrix1[i][j] * matrix2[i][j];

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

    int matrix1[3][3], matrix2[3][3], matrix3[3][3];

    FillTheMatrix(matrix1,3,3);
    FillTheMatrix(matrix2, 3, 3);

    MultblyMatrix(matrix1, matrix2, matrix3);

    cout << "matrix1:\n";
    PrintTheMatrix(matrix1, 3, 3);
    cout << "matrix2:\n";
    PrintTheMatrix(matrix2, 3, 3);
    cout << "result:\n";
    PrintTheMatrix(matrix3, 3, 3);


}
