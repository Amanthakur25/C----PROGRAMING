#include <iostream>
using namespace std;
int revarr(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++, end--;
    return 0;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    revarr(arr, 5);
    for (int i = 0; i <5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}