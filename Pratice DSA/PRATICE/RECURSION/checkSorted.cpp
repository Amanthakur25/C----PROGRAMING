#include<iostream>
using namespace std;
//first way
bool check(int *arr,int size,int i=0){
    if(i==size)
        return true;
    if(arr[i]<arr[i+1])
        check(arr,size,i+1);
    else
        return false;
}
//second way
bool check2(int *arr,int size)
{
    if(size==0||size==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    else
        return check2(arr+1,size-1);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<check2(arr,5);
    return 0;

}
