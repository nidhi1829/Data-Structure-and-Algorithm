#include<iostream>
using namespace std;

/*
   321
   321
   321
*/

int main()
{
    int n ;
    cout << "Enter: ";
    cin >> n;
    
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout << n-j+1;
            j++; 
        }
        cout << endl;
        i++;
    }

    return 0;
}