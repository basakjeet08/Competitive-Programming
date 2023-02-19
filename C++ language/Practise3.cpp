#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main(){
    stack<char> st ;
    string s = "{}";
        st.push(s[0]);
        for(int i = 1;i<s.length();i++){
            char ch = s[i];
            if(st.top() == '(' || st.top() == '{' || st.top() == '['){
                if(st.top() == ch)
                    st.pop();
                else
                    st.push(ch);
            }
        }
        if(st.empty())
            cout<< "DOne ";
}