#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int maxDepth(string s) {
    int n = s.length();
    int maxDepth = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            int depth = 1;

            for (int j = i + 1; j < n; j++) {
                if (s[j] == '(')
                    depth++;
                else if (s[j] == ')')
                    depth--;

                maxDepth = max(maxDepth, depth);

                if (depth == 0)
                    break;
            }
        }
    }
    return maxDepth;
}

int main(){
    string s;
    cout << "Enter s string:";
    cin >> s;

    int result = maxDepth(s);
    cout << "Maximum Nested Depth of Parenthesis is " << result;
    
    return 0;
}
