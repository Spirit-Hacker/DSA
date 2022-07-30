#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;

    node(int x){
        this->data = x;
        this->prev = NULL;
        this->next = NULL;
    }
    ~node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Deleted node with data "<<value<<endl;
    }
};

void print_list(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    } cout<<endl;
}

int get_length(node* &head){
    int len = 0;
    node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(node* &head,int x){
    node* temp = new node(x);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(node* &tail,int x){
    node* temp = new node(x);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtposition(node* &tail,node* &head,int position,int x){
    node* temp = head;
    if(position == 1){
        insertAtHead(head,x);
        return;
    }
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,x);
        return;
    }

    node* nodeToinsert = new node(x);
    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;
    
}

void deleteAtPosition(node* &head,int position){
    if(position == 1){
        node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    else{
        node* prev = NULL;
        node* curr = head;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    node* node1 = new node(10);

    node* head = node1;
    node* tail = node1;

    print_list(head);
    cout<<get_length(head)<<endl;

    insertAtHead(head,11);
    print_list(head);

    insertAtHead(head,12);
    print_list(head);

    insertAtTail(tail,14);
    print_list(head);

    insertAtTail(tail,15);
    print_list(head);
    cout<<get_length(head)<<endl;
    
    insertAtposition(tail,head,3,20);
    insertAtposition(tail,head,2,22);
    print_list(head);
    cout<<get_length(head)<<endl;
    
    deleteAtPosition(head,1);
    print_list(head);

    deleteAtPosition(head,3);
    print_list(head);

    deleteAtPosition(head,5);
    print_list(head);
    
    cout<<get_length(head)<<endl;
    
    return 0;
}