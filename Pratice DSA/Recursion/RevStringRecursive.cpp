#include<iostream>

using namespace std;
void Stringrev(string& str,int start,int end)
{
    if(start>end)
        return ;
    swap(str[start],str[end]);
    start++;
    end--;

    Stringrev(str,start,end);
}
int main()

{
    string str="aman";

    int start=0;
    int end=str.length()-1;
    Stringrev(str,start,end);
    cout<<str;
    return 0;
}