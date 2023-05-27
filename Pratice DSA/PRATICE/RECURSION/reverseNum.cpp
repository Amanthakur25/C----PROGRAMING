#include<iostream>
#include<math.h>
using namespace std;
int sum=0;
int  rev(int n)
{
    if(n)
    {
        return ((n%10)*pow(10,(int)log10(n))+rev(n/10));
    }
    else{
        return 0;
    }
}
int main()
{
    int n=123;
    cout<<rev(n);
    return 0;
}