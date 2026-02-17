#include<iostream>
using namespace std;

void Insertion_Sort(int arr[], int n){
    for(int i=0; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--; 
            cout << "Runs";
        }
    }
    cout << "After Insertion Sorting" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

int main(){
    int n;
    cout << "Enter the Size: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }cout << endl;

    cout << "Before Insertion Sorting" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    Insertion_Sort(arr,n);

    return 0;
}