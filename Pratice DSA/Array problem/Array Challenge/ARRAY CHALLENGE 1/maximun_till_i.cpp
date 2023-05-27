#include<iostream>
using namespace std;
int main(){
    int mx=-19999;//for lowest possible value
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter element at position ",i;
        cin>>a[i];
    }
    for (int  i = 0; i < n; i++)
    {
        mx=max(mx,a[i]);
    }
    cout<<mx;
    return 0;
}

