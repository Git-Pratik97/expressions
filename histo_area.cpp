#include<bits/stdc++.h>
#include<stack>

using namespace std;

int greatest_a_hist(vector<int> a)
{
    int ans = 0;
    int n = a.size();
    int i = 0;
    a.push_back(0);
    stack<int> st;

    while(i < n)
    {
        while(!st.empty() && a[st.top()] > a[i])
        {
            int t = st.top();
            int h = a[t];
            st.pop();
            if (st.empty())
            {
                ans = max(ans, h*i);
            }
            else
            {
                int len = i - st.top() - 1;
                ans = max(ans, h*len);
            }
        }
        st.push(i);
        i++;
    }

    return ans;
}

int main()
{
    vector<int> a = {2, 1, 5, 6, 2, 3};
    cout << greatest_a_hist(a) << endl;

    return 0;
}