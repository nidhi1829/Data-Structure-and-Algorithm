#include<bits/stdc++.h>
using namespace std;

void explainMap(){

    map<int,int> mp;
    map<int,pair<int,int>> mpp2;
    map<pair<int, int>, int> mpp1;
    
    mp[1] = 2; // in key 1 store value 2
    mp.insert({3,1});
    mp.insert({2,4});

    mpp1[{2,3}] = 10;

    for(auto it:mp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mp[1] << endl; // gives value of mp1 key
    cout << mp[2] << endl; // gives value if mp2 key
    cout << mp[5] << endl; // prints 0 means NULL

    auto it = mp.find(3);
    cout << it->second << endl;

    auto it1 = mp.find(5); // this point to after the last element(mp.end())

    auto it2 = mp.lower_bound(2);
    auto it3 = mp.upper_bound(3);

    // erase, swap , size, epmty are same as above container

}

int main(){

    explainMap();

    return 0;
}