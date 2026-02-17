#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

int countNumOfSubstring(string s, int k) {
    int n = s.size();
    unordered_map<char,int> mp;
    int left = 0, count = 0;

    for(int right = 0; right < n; right++) {
        mp[s[right]]++;

        while(mp.size() > k) {
            mp[s[left]]--;
            if(mp[s[left]] == 0) mp.erase(s[left]);
            left++;
        }

        count += (right - left + 1);
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