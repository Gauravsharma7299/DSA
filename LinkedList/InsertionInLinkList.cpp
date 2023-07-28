// Insertion in Linked list
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
// Insert the node at the start of linkedlist
Node* insertAtStart(Node* head){
    Node* new_node=new Node(0);
    new_node->next=head;
    return new_node;

}

// Insert the node at the given position

void insertatPos(Node* head ,int val){
    Node* new_node=new Node(60);
    Node* temp=head;
    while (temp->data!=val)
    {
       temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    

}
// Insert  node at the end

void insertatEnd(Node* head ){
    Node* new_node=new Node(50);
    Node* temp=head;
    while (temp->next!=NULL)
    {
       temp=temp->next;
    }temp->next=new_node;
   
    

}

void printLinkedList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
     cout<<temp->data << " ";
     temp=temp->next;
    }
    
}
int main(){
   Node*  head=new Node(1);
   Node* node1=new Node(2);
   Node* node2=new Node(3);
   Node* tail=new Node(4);
   head->next=node1;
   node1->next=node2;
   node2->next=tail;
   tail->next=NULL;
//  head=  insertAtStart(head);
   insertatPos(head,2);
//   insertatEnd(head);
   printLinkedList(head);


    return 0;
}