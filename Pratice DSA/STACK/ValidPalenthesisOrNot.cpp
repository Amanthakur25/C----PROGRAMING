#include <iostream>
#include <stack>
using namespace std;
bool CheckPalentheisis(string s)
{
    stack<char> res;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch== '[' || ch == '{' || ch == '(')
        {
            res.push(ch);
        }
        else
        {
            char top = res.top();
            if (!s.empty())
            {
                if ((ch == ']' && top == '[') || (ch == '}' && top == '{') || (ch == ')' && top == '('))
                {
                    res.pop();
                }
                else
                    return false;
            }
            else
                return false;
        }
    }
     if (res.empty())
            return true;
        else
            return false;
}
int main()
{
    string s = "[{}]";
    string s1 = "[)]";

    if (CheckPalentheisis(s))
    {
        cout << "correct";
    }
    else
    {
        cout << "wrong ";
    }
    return 0;
}