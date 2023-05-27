#include<iostream>
using namespace std;
void print(int *arr,int s,int e)
{
    for(int i=s;i<=e;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool binaryScearch(int *arr,int s,int e,int k)
{
    cout<<endl;
    print(arr,s,e);
    if(s>e)
        return 0;
    int mid=s+(e-s)/2;
    if(arr[mid]==k)
        return true;
    if(arr[mid]<k)
        return binaryScearch(arr,mid+1,e,k);
    else
        return binaryScearch(arr,s,mid-1,k);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    if(binaryScearch(arr,0,4,3))
        cout<<"founded";
    else
        cout<<"not founded";
    return 0;
}