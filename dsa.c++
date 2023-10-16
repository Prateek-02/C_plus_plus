#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int data){
        val= data;
        next=NULL;
    }
};

    void insertattail(node* &head,int val){

        node* n = new node(val);
        if(head==NULL){
            head=n;
            return;
        }

        node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }

    void display(node* head){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<temp;
    }

int main(){
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    display(head);
}