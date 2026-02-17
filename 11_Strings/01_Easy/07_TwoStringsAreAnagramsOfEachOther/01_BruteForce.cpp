#include<iostream>
#include<algorithm>
using namespace std;

bool checkAnagrams(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] != s2[i]){
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