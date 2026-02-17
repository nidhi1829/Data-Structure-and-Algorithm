#include<iostream>
using namespace std;

void isPrime(int n){
    int cnt = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if((n/i)!=i) cnt++;
        }
    }
    if(cnt == 2) cout << "Its a Prime Number";
    else cout << "Its not a Prime Number";
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    isPrime(n);

    
    return 0;
}