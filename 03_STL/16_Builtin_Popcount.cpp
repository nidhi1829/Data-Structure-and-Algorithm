#include<bits/stdc++.h>
using namespace std;

void explainBuiltin_Popcount(){

    int a, n;
    int num = 7;
    int cnt = __builtin_popcount(num); // give set bits in binary(how many 1's are there)
    cout << cnt << endl;

    long long num1 = 165786578687;
    int cnt1 = __builtin_popcountll(num1); // give set bits in binary(1)
    cout << cnt1 << endl;

}

int main(){

    explainBuiltin_Popcount();

    return 0;
}