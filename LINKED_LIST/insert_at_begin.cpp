#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtBegin(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(20);

    // printList(head);
    insertAtBegin(head, 5);
    printList(head);

    return 0;
}