#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node*next;

    // constructor
    node(int x){
        this->data = x;
        this->next = NULL;
    }

    // Destructor
    ~node(){
        int value = this->data;
        // memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
     cout<<"Deleted the node with data "<<value<<endl;
    }
}; 


// insertion 
void insertAtHead(int x,node* &head){
    node* temp = new node(x);
    temp->next = head;
    head = temp;
}

void insertAtTail(int x,node* &tail){
    node* temp = new node(x);
    tail->next = temp;
    tail = temp;
}

void insertInBetween(node* &tail,node* &head,int position,int x){
    node* temp = head;
    int count = 1;

    if(position == 1 ){
        insertAtHead(x,head);
        return;
    }

    while(count<position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(x,tail);
        return;
    }

    node* nodeToInsert = new node(x);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// Deletion

void deleteAtPosition(node* &head,int position){
    if(position == 1){
        node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }
    else{
        node* curr = head;
        node* prev = NULL;

        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print_list(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    } cout<<"NULL"<<endl;
}

int get_length(node* head){
    node* temp = head;
    int len = 0;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

int main()
{
    node* node1 = new node(10);

    node* head = node1;
    node* tail = node1;

    insertAtHead(12,head);
    insertAtHead(13,head);
    print_list(head);

    insertAtTail(20,tail);
    insertAtTail(30,tail);
    print_list(head);

    insertInBetween(tail,head,4,100);
    print_list(head);

    insertInBetween(tail,head,1,500);
    print_list(head);
    insertInBetween(tail,head,8,300);
    print_list(head);

    cout<<get_length(head)<<endl;

    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    deleteAtPosition(head,1);
    print_list(head);

    deleteAtPosition(head,4);
    print_list(head);

    deleteAtPosition(head,6);
    print_list(head);

   cout<<get_length(head)<<endl;

    return 0;
}