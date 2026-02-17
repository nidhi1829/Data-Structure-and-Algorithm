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

    Node* insertionAtKthElement(Node* head, int k, int element){
        if(head == NULL){
            if(k == 1) return new Node(element);
            else return head;
        }
        if(k == 1){
            return new Node(element, head);
        }
        int cnt = 0;
        Node* temp = head;
        while(temp != NULL){
            cnt++;
            if(cnt == (k-1)){
                Node* x = new Node(element);
                x -> next = temp -> next;
                temp -> next = x;
                break;
            }
            temp = temp -> next;
        }
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
    head = obj.insertionAtKthElement(head, 3, 4);
    obj.printList(head); 

    return 0;
}