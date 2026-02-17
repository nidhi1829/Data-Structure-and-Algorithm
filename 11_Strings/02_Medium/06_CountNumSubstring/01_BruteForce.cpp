#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

int countNumOfSubstring(string s, int k) {
    int n = s.size();
    int count = 0;

    for(int i = 0; i < n; i++) {
        unordered_map<char,int> mp;
        for(int j = i; j < n; j++) {
            mp[s[j]]++;
            if(mp.size() == k) count++;
            if(mp.size() > k) break;
        }
    }
    return count;
}


int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;
    int k;
    cout << "Enter k:";
    cin >> k;

    int result = countNumOfSubstring(s, k);
    cout << "Count: " << result << endl;
    
    return 0;
}