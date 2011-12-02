#include<iostream>
#include <math.h>
#include <stack>
using namespace std;
int main()
{
    int n;
    stack<int> st;
    while(cin>>n)
    {
        while(n)
        {
            (n%2)?(st.push(1)):(st.push(0));
            n=n/2;
        }
        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
        cout<<"\n";
    }
}
