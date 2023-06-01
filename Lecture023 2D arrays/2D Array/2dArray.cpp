#include <iostream>
using namespace std;

int main()
{
    int row, col;
    row = 3;
    col = 3;
    int arr[row][col];

    cout << "enter the array :- ";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}