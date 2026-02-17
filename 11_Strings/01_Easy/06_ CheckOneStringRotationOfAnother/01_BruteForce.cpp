#include<iostream>
using namespace std;

bool rotateString(string &s, string &goal){
    if(s.length() != goal.length()){
        return false;
    }
    for(int i = 0; i < s.length(); i++){
        string rotated = s.substr(i) + s.substr(0, i);
        if(rotated == goal){
            return true;
        }
    }
    return false;
}

int main(){
    string s, goal;
    cout << "Enter s string:";
    cin >> s;
    cout << "Enter t string:";
    cin >> goal;

    bool result = rotateString(s, goal);
    cout << "One strong is rotation of another is " << boolalpha  << result;
    
    return 0;
}