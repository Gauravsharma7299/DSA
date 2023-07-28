#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
void traverse(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//Insertion at start
Node* InsertAtstart(Node* head){
    Node* temp=new Node(0);
  
    temp->next=head;
    return temp;
}
int main(){

    Node* head=new Node(1);
    Node* node2=new Node(2);
    Node* node3=new Node(3);
    Node* node4=new Node(4);

  
   head->next=node2;
   node2->next=node3;
   node3->next=node4;
   node4->next=NULL;
  head=InsertAtstart(head);
  traverse(head);

    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}