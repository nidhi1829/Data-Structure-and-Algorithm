#include<bits/stdc++.h>
using namespace std;

// Print Linearly from 1 to n
int i = 1;
void Print1toN(int i,int num1){
    if(i>num1) return;
    cout << i << " ";
    Print1toN(i+1,num1);

}
// Print Linearly from n to 1;
void PrintNto1(int i,int num2){
    if(i<1) return;
    cout << i << " ";
    PrintNto1(i-1,num2);

}

int main(){
    int num1;
    cout << "Enter the Number 1: ";
    cin >> num1;
    int num2;
    cout << "Enter the Number 2: ";
    cin >> num2;
    cout << endl;

    Print1toN(i,num1);
    cout << endl;
    PrintNto1(num2,num2);
}