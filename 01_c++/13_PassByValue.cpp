#include<bits/stdc++.h>
using namespace std;

// pass by value means we send a copy of original and never change the original...
int doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main()
{
    int num = 10;
    doSomething(num);
    cout << "Num is " << num << endl;

    return 0;
}