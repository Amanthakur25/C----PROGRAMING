#include <iostream>
using namespace std;
int main()
{
    int n = 3, m = 3;
    int a[n][m] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "before"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j]<<" ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            //swap
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    cout<<"after transpose"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}