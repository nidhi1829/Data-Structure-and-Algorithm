#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseWords(string s){
    reverse(s.begin(), s.end());
    int n = s.size(), i = 0, j = 0;
    while(i < n){
        while(i < n && s[i] == ' ') i++;
        if(i >= n) break;

        if(j > 0) s[j++] = ' ';

        int start = j;
        while(i < n && s[i] != ' '){
            s[j++] = s[i++];
        }
        reverse(s.begin() + start, s.begin() +  j);
    }
    s.resize(j);
    return s;
}

int main(){
    string s = " hello world ";
    string result = reverseWords(s);
    cout << "Reverse Words in a string: " << result;
    return 0; 
}