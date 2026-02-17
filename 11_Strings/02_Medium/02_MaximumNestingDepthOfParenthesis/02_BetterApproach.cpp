#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;

int maxDepth(string s) {
    int ans = 0;
    stack<char> st;

    for (auto ch: s) {
        if(ch == '('){
            st.push(ch);
            ans = max(ans, (int)st.size());
        }
        else if(ch == ')'){
            st.pop();
        }
    }
    return ans;
}

int main(){
    string s;
    cout << "Enter s string:";
    cin >> s;

    int result = maxDepth(s);
    cout << "Maximum Nested Depth of Parenthesis is " << result;
    
    return 0;
}