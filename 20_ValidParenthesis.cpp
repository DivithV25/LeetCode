#include <iostream>
#include <bits/stdc++.h>
#include <stdbool.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                    return false;

                if (st.top() == '(' && s[i] == ')')
                {
                    st.pop();
                }

                else if (st.top() == '[' && s[i] == ']')
                {
                    st.pop();
                }

                else if (st.top() == '{' && s[i] == '}')
                {
                    st.pop();
                }
                else
                {
                    
                    return false;
                }
            }
        }
        return (st.empty());
    }
};

int main()
{

    Solution obj;
    string s = "(])";
    bool t = obj.isValid(s);
    cout << t;
}