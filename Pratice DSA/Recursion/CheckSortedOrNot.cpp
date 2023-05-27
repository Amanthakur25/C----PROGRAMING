#include <iostream>
using namespace std;
bool sorted(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;
    if (arr[0] > arr[1])
        return false;
    else
        bool ans = sorted(arr + 1, size + 1);
    return true;
}
int main()
{
    int n;
    cout << "enter the size of array";
    cin >> n;
    int *arr = new int[n];
    cout << "ether the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = sorted(arr, n);
    if (ans == 1)
    {
        cout << "array is sorted";
    }
    else
        cout << "array is unsorted";

    return 0;
}