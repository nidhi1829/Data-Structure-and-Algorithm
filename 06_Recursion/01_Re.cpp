#include<iostream>
using namespace std;

// Recursion => when a function call itself until a specified condition is met...
void func(){
    cout << 1 << endl;
    func();
}

int cnt = 0;
void func1(){
    if(cnt==4) return ; // Base Condition(specified condition to stop infinite loop)
    cout << cnt << " ";
    cnt++;
    func1();
}

int main(){
    func1();

    return 0;
}