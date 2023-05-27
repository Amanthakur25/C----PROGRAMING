#include<iostream>
using namespace std;
int poewr(int a,int b)
{
    if(b==0)
        return 1;
    if(b==1)
        return a;
    int ans=poewr(a,b/2);

    if(b%2==0)
        return ans*ans;
    else
        return a *ans*ans;
}   
int main()
{
    int a,b;
    cout<<"enter values :";
    cin>>a>>b;
    cout<<poewr(a,b);
    return 0;
}