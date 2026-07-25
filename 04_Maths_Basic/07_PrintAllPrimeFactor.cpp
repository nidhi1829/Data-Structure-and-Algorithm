#include<bits/stdc++.h>
using namespace std;

void printAllPrimeFactor(int n){
    vector<int> ls;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            ls.push_back(i);
            while(n % i == 0){
                n = n / i;
            }
        }
    }
    if(n != 1) ls.push_back(n);

    for(auto it: ls){
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    printAllPrimeFactor(n);
    
    return 0;
}