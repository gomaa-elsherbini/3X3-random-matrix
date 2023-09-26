#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;



int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void fillMatrixWithRandomNumbers(int matrix[3][3], int Row, int Columns, int From, int To)
{
    for (int i = 0; i < Row; i++)
    {
        for (int x = 0; x < Columns; x++)
        {
            matrix[i][x] = RandomNumber(From, To);
        }
        cout << endl;
    }
}

void printMatrix(int matrix[3][3], int Row, int Columns)
{
    for (int i = 0; i < Row; i++)
    {
        for (int x = 0; x < Columns; x++)
        {
            cout<<setw(9)<< matrix[i][x];
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];

    fillMatrixWithRandomNumbers(arr, 3, 3, 1, 100);
    printMatrix(arr, 3, 3);


    return 0;
}