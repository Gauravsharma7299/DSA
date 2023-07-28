// Deletion in linklist 

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
void traverseLinklist(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<< " ";
        temp=temp->next;
    }
}


// Deletion at starting 
Node* DeleteAtStart(Node* head){
   return head->next;
    
    
}

// Delete at Position

Node* DeleteatPosition(Node* head, int val){
    if(head->data==val){
        return head->next;
    }
    Node* temp=head ,*prev=NULL;
    while(temp->data!=val){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    return head;
}

// Deletion at end
void DeleteAtEnd(Node* head){
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
}
Node* reverseLinkList(Node* head){
    Node* prev=NULL ,*next=NULL,*curr=head;
    while (curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

    }
    return head;
    
    
}
int main(){
    Node* n1=new Node(1);
    Node* n2=new Node(2);
    Node* n3=new Node(3);
    Node* n4=new Node(4);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=NULL;
//    n1=DeleteAtStart(n1);
   DeleteAtEnd(n1);
//    n1=DeleteatPosition(n1,2);
reverseLinkList(n1);
   traverseLinklist(n1);
   
   
   
   
   
   
    return 0;

}