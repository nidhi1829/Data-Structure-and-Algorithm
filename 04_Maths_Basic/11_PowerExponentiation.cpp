#include<iostream>
using namespace std;

int powerExponent(int x, int n){
    int m = n;
    int ans = 1;

    while(n > 0){
        if(n % 2 == 1){
            ans = ans * x;
            n = n - 1;
        }
        else{
            n = n / 2;
            x = x * x;
        }
    }
    if(m < 0) ans = 1 / ans;

    return ans;
}

int main(){
    int x;
    cout << "Enter Value: ";
    cin >> x;
    int n;
    cout << "Enter Power: ";
    cin >> n;

    cout << x << " pow " << n << " is " << powerExponent(x, n);
    return 0;
}