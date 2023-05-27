#include<bits/stdc++.h>
using namespace std;
bool check(int *arr,int i=0)
{
    if(i==5)
        return true;
    if(arr[i]<=arr[i+1] && check(arr,i+1))
       return true;
    else
        return false; 

}
int main()
{
    int arr[5]={1,2,3,4,5};
    if(check(arr,0))
        cout<<"sorted";
    else    
        cout<<"not sorted";
    return 0;
}