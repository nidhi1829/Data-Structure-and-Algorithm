#include<bits/stdc++.h>
using namespace std;

// Parameterised Recursion (print first n numbers)
void Parameterised(int i,int sum){
    if(i<1){
        cout << sum;
        return ;
    }
    Parameterised(i-1,sum+i);
}

int main(){

    int n;
    cout << "Enter: ";
    cin >> n;

    Parameterised(n,0);
    
    return 0;
}