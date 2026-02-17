#include<iostream>
#include<stack>
#include<string>
using namespace std;

string removeOutermostParentheses(string s){
    stack<char> st;
    string ans = "";

    for(char c:s){
        if(c == '('){
            if(!st.empty()){
                ans += '(';
            }
            st.push('(');
        }
        else{
            st.pop();
            if(!st.empty()){
                ans += ')';
            }
        }
    }
    return ans;
}

int main(){
    string s;
    cout << "Enter Parentheses String: ";
    cin >> s;

    string result = removeOutermostParentheses(s);
    cout << "After Removal of OuterMost Parentheses is " << result;

    return 0;
}