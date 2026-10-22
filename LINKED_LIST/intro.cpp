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

int main(){
    Node* head = new Node(1);
    head->next = new Node(20);
    head->next->next = new Node(35);
    head->next->next->next = new Node(42);
    head->next->next->next->next = new Node(51);
    head->next->next->next->next->next = NULL;

    cout << head->data << " " << head->next->data << " " << head->next->next->data << " " << head->next->next->next->data << " " << head->next->next->next->next->data << endl;
    return 0;
}