#include<bits/stdc++.h>
using namespace std;

void explainSet(){
    set<int> s;
    
    s.insert(1); // {1}
    s.emplace(2); // {1,2}
    s.insert(2); // {1,2}
    s.insert(4); // {1,2,4}
    s.insert(3); // {1,2,3,4}

    // functionality of insert in vector can be used also,
    // that only increases efficiency.

    // begin(), end(), rbegin(), rend(), size(), empty(), swap() are same as those of above

    set<int>::iterator it1 = s.begin();
    set<int>::iterator it2 = s.end();

    for(auto it:s){
        cout << it << " ";
    }
    cout << endl;

    auto it = s.find(3);
    auto i = s.find(6);

    s.erase(5); // erase 5 and takes logarithmic time

    int cnt = s.count(1);
    cout << cnt << endl; 

    auto itt = s.find(3);
    s.erase(it); // it takes constant time

    // {1,2,3,4,5}
    auto t1 = s.find(2);
    auto t2 = s.find(4);
    s.erase(t1,t2); // after erase {1,4,5} {first,last} last is executed
    cout << endl;
    
    for(auto it:s){
        cout << it << " ";
    }
    cout << endl;
    
    // lower_bound() and upper_bound() function works in the same way as in vector it does

    auto i1 = s.lower_bound(2);
    auto i2 = s.upper_bound(3);

}

int main(){
    explainSet();

    return 0;
}