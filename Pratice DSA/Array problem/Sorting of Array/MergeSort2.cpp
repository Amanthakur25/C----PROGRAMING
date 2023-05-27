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

void merge(int arr[], int low, int mid, int high)
{
    int i, j, k;
    int b[high + 1];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++, k++;
        }
        else
        {
            b[k] = arr[j];
            j++, k++;
        }
    }
    while (i <= mid)
    {
        b[k] = arr[i];
        i++, k++;
    }
    while (j <= high)
    {
        b[k] = arr[j];
        k++, j++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = b[i];
    }
}
void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {2, 5, 6, 4, 7};
    int n = 5;
    printarr(arr, n);
    mergeSort(arr, 0, 4);
    printarr(arr, n);
    return 0;
}