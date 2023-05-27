#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    int pro = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        pro = pro * nums[i];
    }
    vector<int> v;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        v.push_back(pro / v[i]);
    }
    return v;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    vector<int> sol;
   
    productExceptSelf(v);
     for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

}