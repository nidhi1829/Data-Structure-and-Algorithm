#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

string sortFrequency(string s) {
    unordered_map<char, int> mp;
    for (char c : s)
        mp[c]++;

    vector<pair<int, char>> vec;
    for (auto it : mp)
        vec.push_back({it.second, it.first});

    sort(vec.begin(), vec.end(), greater<>()); // greater<>() is a built-in comparator (to sort elements in descending order instead of ascending)
    string result = "";
    for (auto p : vec)
        result += string(p.first, p.second);
    return result;
}


int main(){
    string s;
    cout << "Enter s string:";
    cin >> s;

    string result = sortFrequency(s);
    cout << "Sorted Frequency of Characters is " << result;
    
    return 0;
}