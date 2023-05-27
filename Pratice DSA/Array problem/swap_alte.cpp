#include <iostream>
using namespace std;
void printarr(int arr[],int  n)
{
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i];

    }cout<<endl;

    
}

void swapalternate(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if (i+1 < size)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
}

int main()
{
    int even[5] = {1, 2, 3, 4, 5};
    int odd[8]={11,12,13,14,15,16,17,18};

    swapalternate(even,5);
    printarr(even,5);
  
    
    return 0;
}