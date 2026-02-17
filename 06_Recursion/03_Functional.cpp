#include<bits/stdc++.h>
using namespace std;

int functional(int n){
    if(n==0){
        return 0;
    }
    return n + functional(n-1);
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    cout << functional(n);

    return 0;
}