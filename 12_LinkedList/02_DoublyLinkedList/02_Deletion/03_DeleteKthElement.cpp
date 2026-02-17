#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
    Node(int data1, Node* next1, Node* prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node* convertArrToDLL(vector<int> &arr)
    {
        Node* head = new Node(arr[0]);
        Node* prev = head;
        for (int i = 1; i < arr.size(); i++)
        {
            Node* temp = new Node(arr[i], nullptr, prev);
            prev -> next = temp;
            prev = temp;
        }
        return head;
    }

    Node* deleteHead(Node* head){
        if(head == NULL || head -> next == NULL){
            return NULL;
        }
        Node* prev = head;
        head = head -> next;
        head -> prev = NULL;
        prev -> next = NULL;

        delete(prev);
        return head;
    }

    Node* deleteTail(Node* head){
        if(head == NULL || head -> next == NULL){
            return NULL;
        }
        Node* tail = head;
        while(tail -> next != NULL){
            tail = tail -> next;
        }
        Node* newTail = tail -> prev;
        newTail -> next = NULL;
        tail -> prev = NULL;

        delete(tail);
        return head;
    }

    Node* deleteKthElement(Node* head, int k){
        if(head == NULL){
            return NULL;
        }
        int cnt = 0;
        Node* kNode = head;
        while(kNode != NULL){
            cnt++;
            if(cnt == k) break;
            kNode = kNode -> next;
        }
        Node* prev = kNode -> prev;
        Node* next = kNode -> next;

        if(prev == NULL || next == NULL){
            return NULL;
        }
        else if(prev == NULL){
            return deleteHead(head);
        }
        else if(next == NULL){
            return deleteTail(head);
        }
        prev -> next = next;
        next -> prev = prev;
        kNode -> next = nullptr;
        kNode -> prev = nullptr;

        delete(kNode);
        return head;
    }

    void printList(Node* head){
        while(head != nullptr){
            cout << head -> data << " ";
            head = head -> next;
        }
        cout << endl;
    }
};


int main(){
    vector<int> arr = {2, 5, 8, 7, 10};
    Node obj(0);
    Node* head = obj.convertArrToDLL(arr);
    head = obj.deleteKthElement(head, 3);
    obj.printList(head);

    return 0;
}