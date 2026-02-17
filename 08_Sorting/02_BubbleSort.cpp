#include<iostream>
using namespace std;

void Bubble_Sort(int arr[], int n){
    for(int i=0; i<n; i++){
        int swap = 0;
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swap = 1;
            }
        }
        if(swap == 0){
            break;
        }cout << "Runs" << endl;
    }
    cout << "After Bubble Sorting" << endl;
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

    cout << "Before Bubble Sorting" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    Bubble_Sort(arr,n);

    return 0;
}