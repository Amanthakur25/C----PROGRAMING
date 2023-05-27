#include <iostream>
using namespace std;
// int &j=n; here j will refer to n.
void update(int &n) // pass by refernce
{
    n++;
}
int main()
{
    int n = 5;
    update(n);
    cout << n;
}