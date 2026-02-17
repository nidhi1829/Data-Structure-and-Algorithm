#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val): data(val), next(NULL){}
};

class Solution{
public:
    bool searchValue(Node* head, int key){
        Node* current = head;
        while(current != NULL){
            if(current -> data == key){
                return true;
            }
            current = current -> next;
        }
        return false;
    }
};

int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);

    Solution obj;
    if(obj.searchValue(head, 20)) cout << "Found" << endl;
    else cout << "Not Found" << endl;

    return 0;
}