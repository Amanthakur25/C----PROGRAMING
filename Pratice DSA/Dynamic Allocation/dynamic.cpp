#include <iostream>
using namespace std;
int main()
{
    /*
    not a good pratice.

    int n;
    cin>>n;
    int arr[n];
    */

    // good pratice

    int n;
    cout << "enter the size if array";
    cin >> n;
    int *arr = new int[n];
    cout << "enter the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}