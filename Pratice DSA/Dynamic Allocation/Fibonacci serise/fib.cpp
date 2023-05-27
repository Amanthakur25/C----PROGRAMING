#include<iostream>
using namespace std;
int main()
{
    int n=64;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++)
    {
        int nextnumb=a+b;
        cout<<nextnumb<<" ";

        a=b;      
        b=nextnumb;
    }
}