#include <iostream>
using namespace std;
void Merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;

    // Finding th lenght of array.
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // Creating a small array to copy the value.
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy of first array.
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    // Copy of Seconf array.
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge Two Sorted array.
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)

    {
        arr[mainArrayIndex++] = second[index2++];
    }
}
void MergeSort(int *arr, int start, int end)
{
    // Base Case
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;
    // Left Part Sort
    MergeSort(arr, start, mid);

    // Right Part Sort
    MergeSort(arr, mid + 1, end);

    // Merge
    Merge(arr, start, end);
}
int main()
{

    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    MergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}