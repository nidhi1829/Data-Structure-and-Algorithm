#include<iostream>
using namespace std;

bool isIsomorphic(string s, string t){
    if(s.length() != t.length()){
        return false;
    }
    int n = s.length();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(s[i] == s[j] && t[i] != t[j])
                return false;
            if(s[i] != s[j] && t[i] == t[j])
                return false;
        }
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
    cout << "S and T string are Isomorphic is " << result;
    return 0;
}