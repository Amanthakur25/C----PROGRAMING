#include <iostream>
using namespace std;

void number(int n)
{
    if (n <= 0) {
        return;
    }
 
    number(n - 1);
    cout << n << " ";
}
void print(int n)
{
    if(n==1)
    {
        cout<<1;
        return ;
    }
    cout<<n<<" ";
    print(n-1);
}
int main()
{
   int num=5;
   number(num);
    cout<<endl;
   print(num);
   
    return 0;
}