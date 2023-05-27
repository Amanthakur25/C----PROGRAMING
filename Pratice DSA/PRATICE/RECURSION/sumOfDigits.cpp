#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
        return 0;
    
    return (n%10)+sum(n/10);

}
int main()
{
    int n=123;
    cout<<sum(n);
    return 0;
}