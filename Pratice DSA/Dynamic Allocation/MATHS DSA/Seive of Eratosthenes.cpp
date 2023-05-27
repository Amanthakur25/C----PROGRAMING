// to check all the prime number upto n.
#include <iostream>
#include <vector>
using namespace std;
int seivePrime(int n)
{
   
    vector<int> prime(n,0);
    for (int i = 2; i <=n; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for (int  i = 2; i <=n; i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
        
    }
    
    return 0;
    
}


int main()
{
    int n;
    cout << "enter the number :- ";
    cin >> n;
    seivePrime(n);

    return 0;
}