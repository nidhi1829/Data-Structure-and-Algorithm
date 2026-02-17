#include<iostream>
#include<string>
#include<vector>
#include <climits>
using namespace std;

int myATOI(string s){
    int i = 0, sign = 1;
    long res = 0;
    while(i < s.size() && s[i] == ' ') i++; // Single quotes must contain exactly one character.
    if(i == s.size()) return 0;
    if(s[i] == '-'){
        sign = -1;
        i++;
    }
    else if(s[i] == '+'){
        i++;
    }
    while(i < s.size() && isdigit(s[i])){
        res = res * 10 + (s[i] - '0');
        if(sign * res > INT_MAX) return INT_MAX;
        if(sign * res < INT_MIN) return INT_MIN;
        i++;
    }
    return (int)(sign * res);
}

int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;

    int result = myATOI(s);
    cout << "Converted integer " << result << endl;
    
    return 0;
}