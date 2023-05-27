#include <iostream>
using namespace std;
int position(int *arr, int low, int high)
{
    int pivote = arr[low];
    int i = low + 1, j = high;
    do
    {
        while (arr[i] < pivote)
            i++;
        while (arr[j] > pivote)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    } while (i < j);
    swap(arr[low], arr[j]);
    return j;
}
void QuickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int PartaionIndex = position(arr, low, high); // Index of pivote after partaion
        QuickSort(arr, low, PartaionIndex - 1);       // sort left  subarray
        QuickSort(arr, PartaionIndex + 1, high);      // sort right subarray
    }
}
int main()
{
    int arr[5] = {5, 44, 13, 2, 100};
    QuickSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
        cout << arr[i]<<" ";
    return 0;
}