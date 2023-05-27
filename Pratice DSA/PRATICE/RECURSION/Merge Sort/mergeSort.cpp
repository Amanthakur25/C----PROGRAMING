#include <iostream>
using namespace std;
void merge(int *arr, int low, int mid, int high)
{
    int i, j, k;
    int result[high + 1];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
            result[k++] = arr[i++];
        else
            result[k++] = arr[j++];
    }
    while (i <= mid)
        result[k++] = arr[i++];

    while (j <= high)
        result[k++] = arr[j++];

    for (int i = low; i <= high; i++)
    {
        arr[i] = result[i];
    }
}
void mergeSort(int *arr, int low, int high)
{
    int mid;
     if(low < high)
    {
        mid = (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
int main()
{
    int arr[7] = {5, 4, 2, 3, 1,100,500};
    mergeSort(arr, 0, 6);
    for (int i = 0; i < 7; i++)
        cout << arr[i]<<" ";

    return 0;
}