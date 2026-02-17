#include<iostream>
#include<string>
#include<vector>
using namespace std;

string IntegerToRoman(int num){
    vector<pair<int, string>> roman = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, 
        {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    string ans = "";

    for(int i = 0; i < roman.size(); i++){
        while(num >= roman[i].first){
            ans += roman[i].second;
            num -= roman[i].first;
        }
    }
    return ans;
}

int main(){
    int num;
    cout << "Enter num: ";
    cin >> num;

    string roman =  IntegerToRoman(num);
    cout << "Integer " << num << " to Roman numeral: " << roman << endl;
    
    return 0;
}