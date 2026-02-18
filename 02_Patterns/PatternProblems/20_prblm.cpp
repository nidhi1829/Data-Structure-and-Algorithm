#include<iostream>
using namespace std;

/* 
1 0 1 0 1 0 1
1 0 1 0 1 0
1 0 1 0 1
1 0 1 0
1 0 1
1 0
1
*/

int main(){
    int n; 
    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            if(j % 2 == 0){
                cout << 0 << " ";
            }
            else{
                cout << 1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}