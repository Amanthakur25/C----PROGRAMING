#include <iostream>
using namespace std;
int binary_Scearch(int arr[3][3], int key)
{

    int start = 0;
    int end = 3 * 3 - 1;
    int mid = start + (end - start / 2);
    while (start < end)
    {
        int element = arr[mid / 3][mid % 3];
        if (element == key)
        {
            return 1;
        }
        if (element < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid=start+(end-start/2);
    }
    return 0;
}
int main()
{
    int key;
    int arr[3][3];
    cout << "enter the array element : ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "enter the to be scached";
    cin >> key;
    if (binary_Scearch(arr, key))
    {
        cout << "element founded";
    }
    else
    {
        cout << "element not founded";
    }
}