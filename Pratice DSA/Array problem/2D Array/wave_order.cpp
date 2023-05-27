#include <iostream>
#include <vector>
using namespace std;

vector<int> wave_pattern(vector<vector<int>> arr, int nRows, int mCol)
{
    for (int col = 0; col < mCol; col++)
    {
        if (col & 1)
        {
            for (int row = nRows - 1; row < 0; row++)

            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = 0; row < nRows; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}
int main()
{

    int row, col;
    row = 3;
    col = 3;
    vector<int> arr;

    wave_pattern(arr, 3, 3);
    return 0;
}