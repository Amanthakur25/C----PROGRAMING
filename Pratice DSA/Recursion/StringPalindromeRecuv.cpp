#include<iostream>
using namespace std;
int Palindorme(string& str,int start,int end)
{
    if(start>end)
        return 0;
    
    if(str[start]==str[end])
        return 1;
    start++;
    end--;
    Palindorme(str,start,end);
    
}
int main()
{
    string str="nitin";
    int ans=Palindorme(str,0,str.length()-1);
    if(ans==1)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not a palindrome";
    }
    return 0;
}

