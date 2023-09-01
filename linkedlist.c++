#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int val){
        data=val;
        next = NULL;
    }
};

void insertatHead(Node* &head,int d){

    //new node create
    Node* temp = new Node(d);  //temp = 12
    temp -> next = head;       //Next = 10
    head = temp;               //head = 12

}

void print(Node* &head){
    Node* temp = head;             // temp = 12
    while(temp!=NULL){        
        cout<<temp->data<<" ";     //data=12,data=10
        temp = temp->next;         //temp=10,temp=NULL
    }
    cout<<endl;
}

int main(){
    //created a new node
    Node* node1 = new Node(10);
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;

    //head pointed to node1
    Node* head = node1;
    print(head);

    insertatHead(head,12);
    print(head);
}