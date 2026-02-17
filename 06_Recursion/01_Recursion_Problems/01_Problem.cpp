#include<bits/stdc++.h>
using namespace std;

// Print Name 5 Times
// int cnt = 0;
// void PrintName(string name, int num){
//     cout << name << endl;
//     cnt++;
//     if(cnt == num) return;
//     PrintName(name,num);
// }

int i = 1;
void PrintName1(int i, int n){
    if(i>n) return;
    cout << "Nidhi" << endl;
    PrintName1(i+1,n);

}

int main(){
    // string name;
    // cout << "Enter the Name: ";
    // cin >> name;
    // int num ;
    // cout << "The Number is ";
    // cin >> num;

    // PrintName(name,num);
    // cout << endl;

    int i, n;
    cout << "Enter: ";
    cin >> n;
    PrintName1(i,n);

    return 0;
}