#include<iostream>
using namespace std;

// void function without parameter
// void printName(){
//     cout << "Nidhi Khandelwal";
// }

// void function with parameter
void printName(string name){
    cout << "Hey " << name << endl;
}

int main()
{
    //printName();
    string name1;
    cin >> name1;
    printName(name1);

    string name2;
    cin >> name2;
    printName(name2);

    return 0;
}