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

int main()
{
    char ch[100];

    cout << "enter your name :"<<" ";

    cin >> ch;

    cout << "your name is : " ;

    cout << ch<< endl;

    cout << "length of array is :" << getlen(ch)<<endl;
    return 0;
}