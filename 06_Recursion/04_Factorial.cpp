#include<bits/stdc++.h>
using namespace std;

int factorial(int i,int n){
    if(i>n){
        return 1;
    }
    return i * factorial(i+1,n);
}

int main(){

    int n;
    cout << "Enter: ";
    cin >> n;

    cout << factorial(1,n);

    return 0;
}