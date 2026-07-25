#include<bits/stdc++.h>
using namespace std;

// void PrintAllDivisors(int n){

//     for(int i=1; i<=n; i++){
//         if(n%i==0) cout << i << " ";
//         else cout << "Invalid" << endl;
//     } // this give time complexity O(n)
// }

void PrintAllDivisors(int n){
    vector<int> ls;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
          ls.push_back(i);
          if((n/i)!=i){
            ls.push_back(n/i);
        }
    }
  }
  sort(ls.begin(), ls.end());
  for(auto n2:ls){
    cout << n2 << " ";
  }
}

int main(){

    int n;
    cout << "Enter: ";
    cin >> n;
    PrintAllDivisors(n);

    return 0;
}