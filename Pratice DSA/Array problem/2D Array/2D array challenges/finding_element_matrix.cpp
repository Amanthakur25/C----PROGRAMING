#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the sizes";
    cout << "enter the element to scearch";
    int target;
    cin >> target;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "enter the elements";
            cin >> mat[i][j];
        }
    }
    int r = 0, c = m - 1;
    bool found = false;
    while (r < n && c >= 0)
    {
        if (mat[r][c] == target)
        {
            found = true;
        }
        if (mat[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found == true)
    {
        cout << "element founded";
    }
    else
    {
        cout << "not founded";
    }

    return 0;
}