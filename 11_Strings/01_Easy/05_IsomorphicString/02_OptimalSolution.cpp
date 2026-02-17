#include<iostream>
using namespace std;

bool isIsomorphic(string s, string t) {
    int S[256] = {0};
    int T[256] = {0};

    for(int i = 0; i < s.length(); i++) {
        if(S[s[i]] != T[t[i]])
            return false;

        S[s[i]] = i + 1;
        T[t[i]] = i + 1;
    }
    return true;
}


int main(){
    string s, t;
    cout << "Enter s string:";
    cin >> s;
    cout << "Enter t string:";
    cin >> t;

    bool result = isIsomorphic(s, t);
    cout << "S and T string are Isomorphic is " << boolalpha << result;

    // In C++, bool prints as 0 or 1 by default; boolalpha enables textual output (Use boolalpha always when printing booleans)
    
    return 0;
}