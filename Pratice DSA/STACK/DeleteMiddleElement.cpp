#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &st,int cnt,int size)
{
    if(cnt== size/2){
        st.pop();
        return ;
    }
    //storing top number
    int nub=st.top();
    st.pop();

    //recursive call
    solve(st,cnt+1,size);
    st.push(nub);
}
void DeleteMiddleElement(stack<int> &st,int size)
{
    int cnt=0;
    solve(st,cnt,size);

}
int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    DeleteMiddleElement(st,5);
    for(int i=0;i<5;i++)
    {
        cout<<st.top();
        st.pop();
    }
}