#include<bits/stdc++.h>
using namespace std;
 
void explainVector(){

    vector<int> v;
    
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;

    vec.push_back({1,2}); // we have to pass the curly braces 
    vec.emplace_back(3,4); // Automatically assumed curly braces

    vector<int> vec1(5,100); // {100,100,100,100,100}

    vector<int>vec2(5); // {0,0,0,0,0} or any garbage value
 
    vector<int> v1(5,20); // {20,20,20,20,20}
    vector<int> v2(v1); // copy of v1 in v2 {20,20,20,20,20}

    // cout << v2[2] << endl; // access just like an array

    // Access using iterator(begin)
    vector<int> v29(2,29); //{29,29}
    v29.push_back(10); // {29,29,10}
    v29.emplace_back(18); // {29,29,10,18}

    vector<int>::iterator nidhi = v29.begin();
    cout << *(v29.begin()) << endl;  

    nidhi++;
    cout << *(nidhi) << endl;

    nidhi = nidhi+2;
    cout << *(nidhi) << endl;

    cout << "End Iterator" << endl;

    // vector end iterator
    vector<int> v10(2,10); // {10,10}

    v10.push_back(29); // {10,10,29}
    v10.emplace_back(19); // {10,10,29,19}

    vector<int>::iterator n2 = v10.end();
    cout << *(v10.end()) << endl;  // give address of end after 29 position(right after the last element ) which give garbage value

    n2--;
    cout << *(n2) << endl;

    cout << endl;
    cout << v10[2] << " " << v10.at(2) << endl; ; // both are same to access the element of vector 
    cout << v10.back() << endl;
    cout << "Nidhi Khandelwal" << endl;

    // Access using for loop
    for(vector<int>::iterator n2 = v10.begin(); n2 !=v10.end(); n2++){
        cout << *(n2) << " " ;
    }
    cout << endl;

    // Auto
    for(auto n2=v10.begin(); n2 !=v10.end(); n2++){
        cout << *(n2) << " ";
    }
    cout << endl;

    for(auto n2:v10){
        cout << n2 << " ";
    }
    cout << endl;

    // Erase 
    // {10,10,29,19}
    v10.erase(v10.begin()+1,v10.begin()+3);  //(start,end) and end is executed (10,10,29,19) second 10 and third 29 deleted
    
    for(auto n2:v10){
      cout << n2 << " ";
    }
    cout << endl;
    // {10,19}

    // Insertion Function
    vector<int> harry(2,100); // {100,100}
    harry.insert(harry.begin(),300); // {300,100,100}
    harry.insert(harry.begin()+1,200); // {300,200,100,100}
    harry.insert(harry.begin()+1,2,10); // {300,10,10,200,100,100}
    for(auto n3:harry){
        cout << n3 << " ";
    }
    cout << endl;


    // copy 
    vector<int> copy(2,50); // copy = {50,50}
    harry.insert(harry.begin(),copy.begin(),copy.end());
    for(auto n4:harry){
        cout << n4 << " ";
    }
    cout << endl;

    cout << harry.size() << endl;
    harry.pop_back(); // pop the last elemnt
    for(auto n5:harry){
        cout << n5 << " ";
    }
    cout << endl;

    vector<int> p1(2,100); //p1 -> {100,100}
    vector<int> p2(2,200); //p2 -> {200,200}
    p1.swap(p2); // swap p1 -> {200,200} and p2 -> {100,100}
    for(auto p3:p1){
        cout << "p1 is " << p3 << " ";
    }
    cout << endl;
    for(auto p4:p2){
        cout << "p2 is " << p4 << " ";
    }
    cout << endl;
       
    harry.clear();
    cout << harry.empty(); // 1 means True and 0 means False
}

int main(){

    explainVector();

    return 0;
}