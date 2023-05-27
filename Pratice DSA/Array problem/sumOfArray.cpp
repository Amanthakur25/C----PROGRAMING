#include <iostream>
using namespace std;
int main()
{
    int arr[200];
    int size;
    cin >> size;

    cout << "enter the array \n ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    cout << sum;
    return 0;
}