#include <iostream>
#include <stack>
using namespace std;
bool checkParenthesis(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '[' || s[i] == '{' || s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return false;
            else
            {
                if (s[i] == '}' && st.top() || s[i] == ']' && st.top() || s[i] == ')' && st.top())
                    st.pop();
            }
        }
       
    }
    return st.empty();
}
    int main()
    {
        string s = "({[}})";
        cout << checkParenthesis(s);
        return 0;
    }