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

node* InsertAtbeg(node* head,int x){
    node* temp=new node(x);
    temp->next=head;


    return temp;

}

void print(node* head){
    node* curr=head;
    while(curr!=nullptr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }

}

int main()
{
    node* head=nullptr;
    head=InsertAtbeg(head,10);
    head=InsertAtbeg(head,20);
    head=InsertAtbeg(head,30);
    print(head);
    return 0;
}
