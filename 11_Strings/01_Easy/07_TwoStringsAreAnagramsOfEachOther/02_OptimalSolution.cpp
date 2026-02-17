#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool checkAnagrams(string s1, string s2){
    if(s1.length() != s2.length()) return false;
    int freq[26] = {0};
    for(int i = 0; i < s1.length(); i++) freq[s1[i] - 'a']++;
    for(int i = 0; i < s2.length(); i++) freq[s2[i] - 'a']--;
    for(int i = 0; i < 26; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1, s2;
    cout << "Enter s string:";
    cin >> s1;
    cout << "Enter t string:";
    cin >> s2;

    bool result = checkAnagrams(s1, s2);
    cout << "Two strings s1 and s2 are Anagrams of each other is " << boolalpha  << result;
    
    return 0;
}