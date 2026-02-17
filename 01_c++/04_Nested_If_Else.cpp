#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;

    // Simple if else statement
    // if(age<18)
    // {
    //     cout << "Not Eligible for Job ";
    // }
    // else if(age >= 18 && age <= 54)
    // {
    //     cout << "Eligible for Job ";
    // }
    // else if(age >= 55 && age <= 57)
    // {
    //     cout << "Eligible for Job but Retriement Soon";
    // }
    // else if(age >57)
    // {
    //     cout << "Retriement Time";
    // }
    // else{
    //     cout << "Invalid Age";
    // }

    // Nested if else statement
    if(age<18)
    {
        cout << "Not Eligible for Job ";
    }
    else if(age <= 57)
    {
        cout << "Eligible for Job ";
        if(age >=55){
            cout << "but Retirement Soon";
        }
    }
    else if(age >57)
    {
        cout << "Retirement Time";
    }
    else{
        cout << "Invalid Age";
    }

    return 0;
}