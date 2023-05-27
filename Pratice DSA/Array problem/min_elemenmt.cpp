#include <iostream>
using namespace std;

int getmax(int num[], int n)
{
    int max = INT_FAST8_MIN;
    ;
    for (int i = 0; i<n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int main()
{

    int size;
    cout<<"enter the size : ";
    cin >> size;

    int arr[100];

    cout << "enter the array : ";
    for (int i = 0; i <size; i++)
    {
        cin >> arr[i];
    }

    cout << endl<<"The Maximum Element is : "<<getmax(arr, size) << endl;

    return 0;
}