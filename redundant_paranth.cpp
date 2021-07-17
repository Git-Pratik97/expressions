#include<bits/stdc++.h> 
#include<stack> 


using namespace std;

int main()
{
    stack<char> st;
    bool ans = false;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] == '+') || (s[i] == '-') || (s[i] == '*') || (s[i] == '/'))
        {
            st.push(s[i]);
        }

        else if(s[i] == '(')
        {
            st.push(s[i]);
        }

        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                ans = true;
            }
            
            if ((s[i] == '+') || (s[i] == '-') || (s[i] == '*') || (s[i] == '/'))
            {
                st.pop();
            }
            st.pop();
        }
    }
    cout << ans << endl;

    return 0;
}

