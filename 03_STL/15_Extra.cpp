#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int, int> p2){

    if(p1.second < p2.second){
        return true;
    }else if(p1.second == p2.second){
        if(p1.first > p2.second) return true;
    }
    return false;

}

void explainExtra(){

    int a, n;
    sort(a,a+n);
    vector <int> v;
    sort(v.begin(), v.end()); // sorting for vector
    sort(a+2,a+4); // {1,3,5,4} a is 1 and a+2 = 5 and a+4 is end to we sort only a+2 and a+3 

    // sort(a, a+n, greater<int>); // greater<int> is a inbuilt comparator which automatically sort in descending order

    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    // sort it according to increasing second element {{2,1},{4,1}.{1,2}}
    // if second element is same, then sort
    // it according to first element but in descending order. {{4,1},{2,1},{1,2 }}

    sort(a, a+n, comp); // comp is self written comparator, this compartor is boolean function

}