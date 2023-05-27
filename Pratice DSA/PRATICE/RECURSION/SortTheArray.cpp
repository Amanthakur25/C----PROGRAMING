#include<iostream>
using namespace std;
void sorting(int *arr,int len)
{
    if(len==0|| len==1)
        return ;
        for(int i=0;i<len-1;i++)
        {
            if(arr[i]>arr[i+1])
                swap(arr[i],arr[i+1]);
        }
    sorting(arr,len-1);
}
int main()
{
    int arr[5]={5,4,3,2,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    sorting(arr,len);
    cout<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;

}