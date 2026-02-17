#include<bits/stdc++.h>
using namespace std;

int i = 1;
void StrPalindrome(string s, int i, int n){
    if(i >= n/2) return true;
    if(s[i] = s[n-i+1]) 
       return false;
    return StrPalindrome(s, i+1);
}

int main(){

    int i;
    int n;
    cin >> n;
    string s;
    cin >> s;
    StrPalindrome(s,i,n);
    return 0;
}