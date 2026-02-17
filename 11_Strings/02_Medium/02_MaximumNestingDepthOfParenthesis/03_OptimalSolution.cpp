#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;

int maxDepth(string s) {
    int depth = 0, ans = 0;

    for (char ch : s) {
        if (ch == '(') {
            depth++;
            ans = max(ans, depth);
        } else if (ch == ')') {
            depth--;
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