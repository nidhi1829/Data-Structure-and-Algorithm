#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Tc -> O(n * log n + m) (n = number of strings, m =  minimun length of string)
// SC -> O(m) -> storing ans variable

string longestCommonPrefix(vector<string>& strs){
    if(strs.empty()) return "";
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[strs.size()-1];
    string ans = "";
    int minLength = min(first.size(), last.size());
    for(int i = 0; i < minLength; i++){
        if(first[i] != last[i]) break;
        ans += first[i];
    }
    return ans;
}

int main(){ 
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);

    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string result = longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result;

    return 0;
}