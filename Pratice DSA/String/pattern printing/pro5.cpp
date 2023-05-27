/*
    5
    ABCDE
    BCDEF
    CDEFG
    DEFGH
    EFGHI

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <    n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int ch = 'A' + i + j;
            cout << char(ch);
        }

        cout << endl;
    }
}