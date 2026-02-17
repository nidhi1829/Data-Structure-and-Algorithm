#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

int RomanToInteger(string s) {
    int ans = 0;
    unordered_map<char, int> roman = {
        {'I',1}, {'V', 5}, {'X', 10}, 
        {'L', 50}, {'C',100}, {'D',500}, {'M',1000}
    };
    for(int i = 0; i < s.size() - 1; i++){
        if(roman[s[i]] < roman[s[i + 1]]){
            ans -= roman[s[i]];
        }
        else{
            ans += roman[s[i]];
        }
    }
    return ans + roman[s.back()]; // Last character isn’t handled in pair comparison, so it’s added separately — or we handle it inside the loop.
    // To remove this roman[s.back()] we add one more condition if(i + 1 < s.size() && roman[s[i]] < roman[s[i + 1]]) and for(i -> s.size())
    // And then we return ans (only)
}

int main(){
    string s;
    cout << "Enter s string:";
    cin >> s;

    int result = RomanToInteger(s);
    cout << "Roman to Integer is " << result;
    
    return 0;
}