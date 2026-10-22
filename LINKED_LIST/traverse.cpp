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
    head->next->next = new Node(35);
    head->next->next->next = new Node(42);
    head->next->next->next->next = new Node(51);
    head->next->next->next->next->next = NULL;

    printList(head);
    return 0;
}