#include <iostream>
using namespace std;
bool BinaryScr(int arr[], int start, int end, int key)
{

    if (start > end)
        return false;
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
        return true;
    if (arr[mid] < key)
        return BinaryScr(arr, mid + 1, end, key);
        

    else
       return BinaryScr(arr, start,mid - 1, key);
}
int main()
{
    int n;
    cout << "enter size of array" << endl;
    cin >> n;
    cout << endl;
    cout << "enter the key " << endl;
    int key;
    cin >> key;
    cout << endl;
    cout << "enter the array";
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = n - 1;
    int ans = BinaryScr(arr, start, end, key);
    cout<<ans;

    return 0;
}