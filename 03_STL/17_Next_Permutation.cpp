#include<bits/stdc++.h>
using namespace std;

void explainNextPermutation(){

    string s = "123";

    do{
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));

    cout << endl;

    string s1 = "543";
    sort(s1.begin(),s1.end());

    do{
        cout << s1 << endl;
    }while(next_permutation(s1.begin(),s1.end()));

}

int main(){

    explainNextPermutation();

    return 0;
}