#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;


    node(int x){
        data=x;
        next=nullptr;

    }

};

node* insertAtend(node*head,int data){

    node* temp=new node(data);
    if(head==nullptr){
        head=temp;
        return temp;
    }
    node* curr=head;
    while(curr->next!=nullptr){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

void print(node* head){
    node* curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }

}

int main()
{
    node* head=nullptr;
    head=insertAtend(head,10);
    head=insertAtend(head,20);
    head=insertAtend(head,30);
    print(head);
    return 0;
}
