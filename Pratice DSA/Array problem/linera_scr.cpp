#include <iostream>
using namespace std;
int linarSearch(int arr[], int key)
{
    bool ans = 0;
    for (int i = 0; i <= 10; i++)
    {
        if (arr[i] == key)
        {
            ans = 1;
        }
    }
    return ans;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, key;
    cout << "\nenter the number ot be search :";
    cin >> key;
    int ans = linarSearch(arr, key);
    if (ans == 1)
    {
        cout << "element founded\n";
    }
    else
    
    {
        cout << "elemnet not founded\n";
    }
    return 0;
}