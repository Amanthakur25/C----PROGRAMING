/*
    5
    E
    DE
    CDE
    BCDE
    ABCDE

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ch;
    for (int i = 0; i <= n; i++)
    {
        int ch = 'A' + n - i;
        for (int j = 0; j < i; j++)
        {
           
            cout << char(ch);
            ch++;
            
        }
        

        cout << endl;
    }
}