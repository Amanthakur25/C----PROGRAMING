#include <iostream>
using namespace std;
bool linearScr(int arr[],int size,int key)
{
    if(size==0)
        return false;
    if(arr[0]==key)
        return true;
    bool ans=linearScr(arr+1,size-1,key);

    return ans;

}
int main()
{
    int n;
    cout << "enter the size of array";
    cin >> n;
    int key;
    cout << "enter the key";
    cin >> key;
    int *arr = new int[n];
    cout << "enter the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans=linearScr(arr,n,key);
    if(ans)
    {
        cout<<"element founded";
    }
    else
        cout<<"not founded";
    return 0;
}