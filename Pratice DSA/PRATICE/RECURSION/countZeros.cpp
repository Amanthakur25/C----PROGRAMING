#include<iostream>
using namespace std;
int coutnzeros(int n,int c)
{
    if(n==0)
        return c;
    int rem=n%10;
    if(rem==0)  
        return coutnzeros(n/10,c+1);
    else
        return coutnzeros(n/10,c);
}
int main()
{
    int n=1002003;
    cout<<coutnzeros(n,0);
    return 0;
}