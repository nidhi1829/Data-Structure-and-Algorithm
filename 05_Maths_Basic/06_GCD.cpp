#include<iostream>
using namespace std;

void findGCD(int num1, int num2){
    // int gcd = 1;
    // for(int i=1;i<=min(num1,num2);i++){
    //     if(num1%i==0 && num2%i==0) gcd = i;
    // }
    // cout << "GCD Number is " <<  gcd << endl;

    int gcd = 1;
    for(int i = min(num1,num2); i>=1; i--){
        if(num1%i==0 && num2%i==0) cout << "GCD NUmber is " << i << endl;
        break;
    }
    // This is a Brute Force Alogrithm
}

void findGCD2(int num1, int num2){
    // This is a Equilateral Algorithm...
    while(num1>0 && num2>0){
        if(num1>num2) num1 = num1%num2;
        else num2 = num2%num1;
    }
    if( num1 == 0) cout << num2 << endl;
    else cout << num1 << endl;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    findGCD2(num1, num2);
    return 0;
}