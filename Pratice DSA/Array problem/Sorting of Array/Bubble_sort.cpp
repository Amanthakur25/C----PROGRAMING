/*
  space complexity  =O(1)
  time complexity =O(n^2)
  best time complexity= O(n)
  In the Nth Round n th largest element is placed in the correct place.
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 3, 5, 1, 4};
    int n = 5;
    bool swaped = false;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }
        if (swaped == false)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}