#include <iostream>
using namespace std;
void printarr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
int partation(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (arr[i] <= pivot)
        {

            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }

    } while (i < j);
    swap(arr[low], arr[j]);

    return j;
}

void QuickSort(int *arr, int low, int high)
{
    int partationIndex; // index of pivote after partaion
    if (low < high)
    {
        partationIndex = partation(arr, low, high);
        QuickSort(arr, low, partationIndex - 1);  // sort left sub array
        QuickSort(arr, partationIndex + 1, high); // sort right sub array
    }
}

int main()
{
    int arr[] = {2, 5, 6, 4, 7};
    int n = 5;
    printarr(arr, n);
    QuickSort(arr, 0, 4);
    printarr(arr, n);
    return 0;
}