#include <iostream>
#include <stack>
using namespace std;
void InsertAtCorrectPos(stack<int>& Stack, int num)
{
    if (Stack.empty() || (Stack.top() < num))
    {
        Stack.push(num);
        return;
    }
    int n = Stack.top();
    Stack.pop();

    InsertAtCorrectPos(Stack, num);
    Stack.push(n);
}
void SortStack(stack<int> &s)
{
    if (s.empty())
        return;

    int num = s.top();
    s.pop();

    SortStack(s);

    InsertAtCorrectPos(s, num);
}
int main()
{
stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5); 
    SortStack(st);
     for(int i=0;i<5;i++)
    {
        cout<<st.top();
        st.pop();
    } 
return 0;

}