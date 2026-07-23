#include<bits/stdc++.h>
using namespace std;

void explainList(){
    list <int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(10); // {10,2,4}
    ls.emplace_front(4); //{4,10,2,4}

    list<int>::iterator n2 = ls.begin();
    list<int>::iterator n3 = ls.end();

    for(auto n4:ls){
        cout << n4 << " ";
    }

    // Rest of functions same as vector
    // begin , end, rbegin, rend, clear, insert, size, swap, empty (all of the function are same)

}

int main()
{
    explainList();

    return 0;
}