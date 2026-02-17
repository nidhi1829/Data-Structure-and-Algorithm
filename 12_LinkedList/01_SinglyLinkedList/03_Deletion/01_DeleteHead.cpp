#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
     
    Node* convertArrToLL(vector<int> &arr){
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i = 1; i < arr.size(); i++){
            Node* temp = new Node(arr[i]);
            mover -> next = temp;
            mover = temp;
        }
        return head;
    }

    Node* deleteHead(Node* head){
        if(head == NULL){
            return head;
        }
        Node * temp = head;
        head = head -> next;
        free(temp);
        
        return head;
    }
    
    void printList(Node* head){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
};

int main(){
    vector<int> arr = {2,5,8,7,10};
    Node obj(0);
    Node* head = obj.convertArrToLL(arr);
    head = obj.deleteHead(head);
    obj.printList(head); 

    return 0;
}