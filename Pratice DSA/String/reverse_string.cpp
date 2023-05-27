#include <iostream>
using namespace std;
int getlen(char ch[])
{
    int count = 0;
    int i = 0;
    while (ch[i] != '\0')
    {
        i++;
        count++;
    }

    return count;
}

void StrRev(char ch[])
{

    int size = getlen(ch);
    int s = 0, e = size-1;
    while (s < e)
    {
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
    cout<<ch;
}


int main()
{
    char ch[100];
    cout << "Enter the string : ";
    cin >> ch;
    cout << "Reverse of the string is :";
    StrRev(ch);

    return 0;
}
