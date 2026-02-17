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
    head = obj.deleteTail(head);
    obj.printList(head);

    return 0;
}