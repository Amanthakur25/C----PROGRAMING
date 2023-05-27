#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[n];
    cout << "enter the size of array:";
    cin >> n;
    cout << "enter array:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            curr += a[j];
            cout << curr << endl;
        }
        cout<<"\n";
    }
    return 0;
}