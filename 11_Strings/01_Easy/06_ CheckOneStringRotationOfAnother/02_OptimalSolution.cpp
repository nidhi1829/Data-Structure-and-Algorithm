#include<iostream>
using namespace std;

bool rotateString(string &s, string &goal){
    if(s.length() != goal.length()) return false;
    string doubleS = s + s;
    return doubleS.find(goal) != string :: npos;
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