#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

    node(int x){
        this->data = x;
        this->next = NULL;
    }
    ~node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Deleted the node with data "<<value<<endl;
    }
};

void insert_node(node* &tail,int element,int x){
    if(tail == NULL){
        node* temp = new node(x);
        tail = temp;
        temp->next = temp;
    }
    else{
        node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        node* temp = new node(x);
        temp->next = curr->next;
        curr->next = temp;

    }
}

void print(node* tail){
    node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while(tail != temp);
    cout<<endl;
}

void delete_node(node* &tail,int element){
    if(tail == NULL){
        cout<<"List is empty\n";
        return;
    }
    else{
        node* prev = tail;
        node* curr = prev->next;

        while(curr->data != element){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(curr == prev){
            tail = NULL;
        }
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    node* tail = NULL;
    
    insert_node(tail,5,3);
    print(tail);
    insert_node(tail,3,5);
    print(tail);
    insert_node(tail,5,7);
    print(tail);
    insert_node(tail,7,9);
    print(tail);
    insert_node(tail,5,6);
    print(tail);

    delete_node(tail,3);
    print(tail);

    return 0;
}