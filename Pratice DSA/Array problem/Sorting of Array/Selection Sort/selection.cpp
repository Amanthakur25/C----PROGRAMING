// find the minium element in the unsorted array and swap it in the begning 
#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[n];
    cout << "Enter the Size Of Array";
    cin >> n;
    cout << "enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Sorting";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<"after sorting";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] ;
    }
    return 0;
}