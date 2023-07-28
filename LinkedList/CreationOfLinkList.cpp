// Creation of LinkedList
#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};
int main(){
    Node* node1=new Node();
    Node* node2=new Node();
    Node* node3=new Node();
    node1->data=4;
    node1->next=node2;

    node2->data=5;
    node2->next=node3;
    
    node3->data=6;
    node3->next=NULL;
    
    
    return 0;
}