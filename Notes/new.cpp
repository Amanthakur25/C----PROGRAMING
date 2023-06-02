#include <iostream>
#include <stack>
using namespace std;
void insert(stack<int>st,int num){
    if()
}
void revrse(stack<int> st)
{
    if (st.empty())
    {
        return;
    }

    int num = st.top();
    st.pop();

    revrse(st);

    insert(st,num);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(3);
    st.push(4);

    for (int i = 0; i < 4; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }
    revrse(st);

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }
}