#include<bits/stdc++.h>
using namespace std;

void countPrimesRange(vector<pair<int,int>> queries){
    if(queries.empty()) return;

    int maxR = 0;
    for(auto q : queries){
        maxR = max(maxR, q.second);
    }

    vector<int> listPrime = getSieve(maxR);

    for(int i = 1; i <= maxR; i++){
        listPrime[i] += listPrime[i - 1];
    }

    for(auto q : queries){
        int l = q.first;
        int r = q.second;

        if(l == 0)
            cout << listPrime[r] << " ";
        else
            cout << (listPrime[r] - listPrime[l - 1]) << " ";
    }
}

vector<int> getSieve(int num){
    vector<int> prime(num + 1, 1);

    if(num >= 0) prime[0] = 0;
    if(num >= 1) prime[1] = 0;

    for(int i = 2; i * i <= num; i++){
        if(prime[i] == 1){
            for(int j = i * i; j <= num; j += i){
                prime[j] = 0;
            }
        }
    }
    return prime;
}

int main(){
    int q;
    cin >> q;

    vector<pair<int,int>> queries;

    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        queries.push_back({l, r});
    }

    countPrimesRange(queries);
    
    return 0;
}