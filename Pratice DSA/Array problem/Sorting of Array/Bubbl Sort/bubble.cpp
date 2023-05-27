// repetedly swap two  adjacent elementes if they are in worng order
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size";
    cin >> n;
    int arr[n];
    cout<<"enter the array to be sorted";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        count++;
    }
    cout<<"anter sorting";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i];
    }
    return 0;
}