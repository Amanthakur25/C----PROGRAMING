/*space complexity  =O(1)
  time complexity =O(n^2)
  best case and worst case =O(N^2)
  it could be used in small sized array
  find the minmum element in the unsorted array and sort it in first place.
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,4,1,3,5};
    int n=5;
    for(int i=0;i<=n-1;i++){
        int minIndex=i;

        for (int  j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
        
    }
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i];
    }
    
}
