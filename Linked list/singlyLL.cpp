#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next= NULL;
    }

};
void Printnode(Node *head){
    while (head!= NULL){
    cout <<head->data<<" ";
    head= head->next;
    }

}

int main(){
Node *head= new Node(10);
head -> next= new Node(50);
head-> next->next = new Node(60);
head-> next->next->next = new Node(75);

Printnode(head);

return 0;
}