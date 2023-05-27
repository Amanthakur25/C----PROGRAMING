#include <iostream>
#include <vector>
using namespace std;
int findKthLargest(vector<int> &nums, int k)
{
  
    int value = 0;
    int real = 0;
    int repetedEle = 0;
    int trueval=0;
    int size = nums.size() - 1;
    for (int i = size; i > k - 1; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            repetedEle++;
        }
        else
        {
            real++;
            if (k == real)
            {
                trueval=repetedEle+real;

                value = nums[size-trueval+1];
                return value;
            }
        }
    }
    
}
int main()
{
    vector<int> V;
    V.push_back(1);
    V.push_back(2);
    V.push_back(2);
    V.push_back(5);
    V.push_back(5);
    V.push_back(5);
    V.push_back(5);
    V.push_back(5);
    V.push_back(6);
    int k = 3;
    int value= findKthLargest(V, k);
    cout <<value;
}