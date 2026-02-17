#include<iostream>
#include<string>
using namespace std;

// Brute Force Approach
// TC -> o(n2) & SC -> o(1)

string largestOddNum(string num){
    string ans = "";
    int n = num.size();
    for(int i = 0; i < n; i++){
        string temp = num.substr(0, i+1);
        int lastDigit = temp.back() - '0';

        if(lastDigit % 2 == 1){
            ans = temp;
        }
    }
    return ans;
}

// Optimal Approach
// Tc -> o(n)

string largestOddNum1(string num){
    for(int i = num.size()-1; i >= 0; i--){
        if((num[i]-'0') % 2 == 1){
            return num.substr(0, i+1);
        }
    }
    return "";
}

int main(){ 
    string num;
    cout << "Enter the String: ";
    cin >> num;

    string result = largestOddNum1(num);
    cout << "Largest Odd Number in a String: " << result;
    return 0;
}