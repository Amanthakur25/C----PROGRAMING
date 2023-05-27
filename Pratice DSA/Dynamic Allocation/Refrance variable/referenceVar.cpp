#include <iostream>
using namespace std;
void SwapUsingPrinters(int *a, int *b)//call by reference variable
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 5;
    int b = 10;
    SwapUsingPrinters(&a, &b);
    cout<<"a is"<<a<<"b is  "<<b;
    return 0;
}