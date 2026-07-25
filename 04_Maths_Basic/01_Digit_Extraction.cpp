#include<iostream>
using namespace std;

void DigitExtraction(int n){

    while(n>0){
        int lastdigit = n%10;
        n = n/10;
        int num = n;
        cout << lastdigit << " " << num << endl;
    }
}

int main(){

    int n;
    cout << "Enter: ";
    cin >> n;

    DigitExtraction(n);

    return 0;
}