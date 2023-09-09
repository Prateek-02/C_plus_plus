#include<iostream>
using namespace std;

/*
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

    void insertatposition(Node* head,int pos,int val){
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

    void update(Node* &head, int k,int val){
        Node* temp = head;
        int cur_pos=0;
        while(cur_pos!=k){
            temp=temp->next;
            cur_pos++;
        }
        temp->val=val;
    }

    void deleteathead(Node* &head){
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    void deleteattail(Node* &head){
        Node* sec_last = head;
        while(sec_last->next->next!=NULL){
            sec_last=sec_last->next;
        }
        Node* temp = sec_last->next;
        sec_last->next=NULL;
        free(temp);


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
    insertatposition(head,2,4);
    display(head);
    update(head,2,5);
    display(head);
    deleteathead(head);
    display(head);
    deleteattail(head);
    display(head);
}
*/



class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
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

    void insertathead(node* &head, int val){
        node* n = new node(val);
        n->next=head;
        head=n;
    }

    bool search(node* &head,int key){
        node* temp = head;
        while(temp!=NULL){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }

    void deleteathead(node* &head,int val){
        node* todelete = head;
        head=head->next;
        delete todelete;
    }

    void deletion(node* &head,int val){

        if(head==NULL){
            return;
        }
        if(head->next==NULL){
            deleteathead(head,val);
            return;
        }

        node* temp = head;
        while(temp->next->data!=val){
            temp=temp->next;
        }
        node* todelete = temp->next;
        temp->next=temp->next->next;
        delete todelete;
    }

    void update(node* &head, int k,int val){
        node* temp = head;
        int cur_pos=0;
        while(cur_pos!=k){
            temp=temp->next;
            cur_pos++;
        }
        temp->data=val;
    }

    

    void display(node* head){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp;
    }

    node* reverse(node* &head){
        node* prev = NULL;
        node* curr = head;
        node* next;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        return prev;
    }

    node* revrec(node* &head){

        if(head==NULL || head->next==NULL){
            return head;
        }

        node* newhead = revrec(head->next);
        head->next->next=head;
        head->next = NULL;

        return newhead;
    }

int main(){
    node* head = NULL;
    //insertion at tail
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    display(head);
    cout<<endl;

    //insertion at head
    insertathead(head,8);
    display(head);
    cout<<endl;

    //reverse

    node* newhead = reverse(head);
    display(newhead); 
    cout<<endl;



/*
    //searching element
    cout<<search(head,3)<<endl;

    //delete value
    deletion(head,3);
    display(head);
    cout<<endl;

    //delete at head
    deleteathead(head,8);
    display(head);
    cout<<endl;

    //updating a value
    update(head,1,6);
    display(head);
*/
}