#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;

    Node(int x){
        data=x;
        next=prev=NULL;

    }

};

int main(){
Node *head =new Node(10);
Node *temp =new Node(20);
Node *temp2 =new Node(30);
Node *temp3 = new Node(40);

head->next = temp;
temp->prev =head;
temp->next =temp2;
temp2->prev =temp;
temp2->next=temp3;

return 0;
}