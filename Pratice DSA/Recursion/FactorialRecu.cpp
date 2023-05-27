#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0) // basecase
        return 1;
    int smallprob = factorial(n - 1);
    int bigprob = n * smallprob;
    return bigprob; // or return n*factorial(n-1);
}
int main()
{
    int n;
    cout << "enter a number";
    cin >> n;
    int ans = factorial(n);
    cout << ans;
    return 0;
}