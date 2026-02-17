#include<iostream>
#include<string>
using namespace std;

string removeOutermostParentheses(string s){
    string ans = "";
    int level = 0;

    for(char c:s){
        if(c == '('){
            if(level > 0){
                ans += c;
            }
            level++;
        }
        else{ 
            level--;
            if(level > 0){
                ans += c;
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