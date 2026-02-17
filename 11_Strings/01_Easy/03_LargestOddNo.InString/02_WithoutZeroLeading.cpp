#include<iostream>
#include<string>
using namespace std;

// TC -> o(n2) & SC -> o(1)

string largestOddNum(string s){
    int ind = -1;
    int i;
    for(int i = s.size()-1; i >= 0; i--){
        if((s[i]-'0') % 2 == 1){
            ind = i;
            break;
        }
    }
    i = 0;
    while(i <= ind && s[i] == '0') i++;
    return s.substr(i, ind-i+1);
}

int main(){ 
    string s;
    cout << "Enter the String: ";
    cin >> s;

    string result = largestOddNum(s);
    cout << "Largest Odd Number in a String: " << result;
    return 0;
}