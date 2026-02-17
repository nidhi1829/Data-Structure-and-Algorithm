#include<iostream>
using namespace std;

void ArmstrongNo(int n){
    int dup = n;
    int sum = 0;

    while(n!=0){
        int ld = n%10;
        sum = sum + (ld*ld*ld);
        n = n/10;
    }
    if(sum == dup) cout << "Its a Armstrong Number" << endl;
    else cout << "Its not a Armstrong Number" << endl;
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    ArmstrongNo(n);

    return 0;
}