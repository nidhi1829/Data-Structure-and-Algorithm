#include<bits/stdc++.h>
using namespace std;

void explainMultiSet(){
    // Everything is same as set
    // only stores duplicate elements also

    multiset<int>ms;

    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1,2}
    ms.insert(2); // {1,1,1,2}

    int cnt = ms.count(1);
    cout << cnt << endl;

    ms.erase(1); // erase all the 1's
    
    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1+2));

    // rest all functions same as set
    
}

int main(){
 
    explainMultiSet();

    return 0;
}