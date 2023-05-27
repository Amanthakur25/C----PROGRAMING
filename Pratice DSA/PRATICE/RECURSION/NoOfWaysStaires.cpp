#include<iostream>
using namespace std;
int countStaires(int n)
{
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    return countStaires(n-1)+countStaires(n-2);

}
int main()
{
    int staire;
    cin>>staire;
    cout<<countStaires(staire)<<" ";
    return 0;
}