#include<bits/stdc++.h>
using namespace std;
bool check(int *arr,int size,int k,int i=0)
{
    if(i==size)
        return false;
    if(arr[i]==k)
        return true;
    else
        return check(arr,size,k,i+1);

}
int main()
{
    int arr[5]={1,2,3,4,5};
    if(check(arr,5,8))
        cout<<"present";
    else    
        cout<<"not presen";
    return 0;
}