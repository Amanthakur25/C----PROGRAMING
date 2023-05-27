#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        j--;
        arr[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}