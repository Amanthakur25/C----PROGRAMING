#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {1, 2, 3, 4, 5, 77};
    int odd[5] = {1, 2, 3, 4, 5};

    int key = 2;
    int index = binarySearch(even, 6, 77);
    cout << "Index of 2 is " << index << endl;
}