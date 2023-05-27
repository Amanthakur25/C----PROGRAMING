// find the total number of distinct ways to to reach to Nth position
#include <iostream>
using namespace std;
int distinctWays(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    int ans = distinctWays(n - 1) + distinctWays(n - 2);

    return ans;
}
int main()
{
    cout << endl;
    int n;
    cout << "Enter the no of Staires : ";
    cin >> n;
    cout << distinctWays(n);
    cout << endl;
    return 0;
}