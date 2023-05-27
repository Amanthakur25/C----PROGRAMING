// WAP to print row wise sum.
#include <iostream>
using namespace std;
void printarray(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int rowWiseSum(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    return 0;
}
int main()
{
    int arr[3][3];

    cout << "enter the array :- ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    printarray(arr);
    cout << endl;
    rowWiseSum(arr);
    return 0;
}