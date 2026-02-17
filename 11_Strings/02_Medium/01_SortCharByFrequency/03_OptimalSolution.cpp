#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

string sortFrequency(string s) {
    vector<int> freq(256, 0);

    for (char c : s)
        freq[c]++;

    vector<vector<char>> buckets(s.length() + 1);

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0)
            buckets[freq[i]].push_back(char(i));
    }

    string result = "";
    for (int i = s.length(); i > 0; i--) {
        for (char c : buckets[i]) {
            result += string(i, c);
        }
    }
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
