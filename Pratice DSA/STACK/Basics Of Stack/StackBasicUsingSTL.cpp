#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // creation of stsck

    stack<int> s;

    s.push(2);
    s.push(3);

    if(s.empty())
    {
        cout<<"stack is empty ";
    }
    else{
        cout<<"stack is not empty";
    }
    cout <<s.top() << endl;
    return 0;
}