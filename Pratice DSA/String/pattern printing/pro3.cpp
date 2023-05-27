/*
    
    1
    23
    345
    4567
    56789


*/
#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < i; j++)
        {

            cout << i + j;
        }

        cout << endl;
    }
}