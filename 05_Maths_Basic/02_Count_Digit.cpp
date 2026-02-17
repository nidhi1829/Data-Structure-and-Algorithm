#include<iostream>
using namespace std;

int CountDigit(int n){
    int cnt = 0;
    while(n>0){
        int lastElement = n%10;
        cnt++;
        n = n/10;
    }
    cout << cnt << endl;;
}

// int CountDigit(int n){
//     int cnt = (int)(log10(n)+1);
//     cout << cnt << endl;
// }

int main(){

    int n;
    cout << "Enter: ";
    cin >> n;

    CountDigit(n);

    return 0;
}