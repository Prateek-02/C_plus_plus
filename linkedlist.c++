#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
    }
};

    void insertathead(Node* &head,int val){
        Node* n1 = new Node(val);
        n1->next=head;
        head=n1;
    }

    void insertattail(Node* &head,int val){
        Node* n1 = new Node(val);
        Node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n1;
    }

    void insertatposition(Node* head,int val,int pos){
        Node* n1 = new Node(val);
        Node* temp = head;
        int cur_pos=0;
        while(cur_pos!=pos-1){
            temp=temp->next;
            cur_pos++;
        }
        n1->next=temp->next;
        temp->next=n1;
    }

    void display(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<temp<<endl;
    }


int main(){
    Node* head = NULL;
    insertathead(head,2);
    display(head);
    insertathead(head,1);
    display(head);
    insertattail(head,3);
    display(head);
    insertatposition(head,4,2);
    display(head);
}