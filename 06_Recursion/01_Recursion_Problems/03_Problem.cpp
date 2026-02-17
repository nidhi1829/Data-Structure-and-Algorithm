#include<bits/stdc++.h>
using namespace std;

// Print Linearly from 1 to N (but by backtracking)
void BackTracking1toN(int i,int n){
    if(i<1) return ;
    BackTracking1toN(i-1,n);
    cout << i << " ";
}

// Print Linearly from N to 1 (but by backtracking)
void BackTrackingNto1(int i,int n){
    if(i>n) return ;
    BackTrackingNto1(i+1,n);
    cout << i << " ";
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    BackTracking1toN(n,n);
    cout << endl;
    BackTrackingNto1(1,n);

    return 0;
}