#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string sortFrequency(string s) {
    string result = "";

    while (!s.empty()) {
        char maxChar;
        int maxFreq = 0;

        for (char c : s) {
            int cnt = 0;
            for (char x : s) {
                if (x == c) cnt++;
            }
            if (cnt > maxFreq) {
                maxFreq = cnt;
                maxChar = c;
            }
        }
        result += string(maxFreq, maxChar);

        string temp = "";
        for (char c : s) {
            if (c != maxChar)
                temp += c;
        }
        s = temp;
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