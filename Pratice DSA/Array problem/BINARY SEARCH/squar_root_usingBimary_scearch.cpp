#include <iostream>
using namespace std;
int squar_root(int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s < e)
    {
        int squar = mid * mid;
        if ((squar) == n)
        {
            return mid;
        }
         
        if (squar < n)
        {
            ans = mid;
             s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}
int main()
{
    cout<<"squar root is for the "<<squar_root(36)<<endl;
    

}