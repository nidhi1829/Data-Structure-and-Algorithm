#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int age;
    // cin >> age;
    
    // if(age >= 18)
    // {
    //     cout << "You are Adult" << endl;
    // }
    // else if(age < 18){
    //     cout << "You are not Adult" << endl;
    // }

    int marks;
    cin >> marks;
    cout << "Your Marks " << marks << endl;
    
    if(marks < 25)
    {
        cout << "Your Grade is 'F'";
    }
    else if(marks >= 25 and marks <= 44)
    {
        cout << "Your Grade is 'E' ";
    }
    else if(marks >= 45 && marks <= 49)
    {
        cout << "Your Grade is 'D'";
    }
    else if(marks >= 50 and marks <= 59)
    {
        cout << "Your Grade is 'C'";
    }
    else if(marks >= 60 && marks <= 79)
    {
        cout << "Your Grade is 'B'";
    }
    else if(marks >= 80 and marks <= 100)
    {
        cout << "Your Grade is 'A'";
    }
    else{
        cout << "Invalid Marks";
    }

    return 0;
}