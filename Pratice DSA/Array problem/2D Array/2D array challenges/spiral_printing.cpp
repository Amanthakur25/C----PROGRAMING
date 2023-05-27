#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the size";
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "enter element at index" << (i + 1), (j + 1);
            cin >> a[i][j];
        }
    }
    //spiral oreder print
    int row_start = 0, row_end = n - 1, coll_start = 0, coll_end = m - 1;
    while (row_start <= row_end && coll_start <= coll_end)
    {
        //rowstart
        for (int col = coll_start; col <= coll_end; col++)
        {
            cout << a[row_start][col] << "";
        }
        row_start++;

        //col end
        for (int row = row_start; row <= row_end; row++)
        {
            cout << a[row][coll_end] << " ";
        }

        //roe rnd
        coll_end--;
        for (int col = coll_end; col >= coll_start; col--)
        {
            cout << a[row_end][col] << " ";
        }
        row_end--;
        for (int row = row_end; row >= row_start; row--)
        {
            cout << a[row][coll_start] << " ";
        }
        coll_start++;
    }
    return 0;
}