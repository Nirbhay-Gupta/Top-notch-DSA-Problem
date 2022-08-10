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

node* deleAtbeg(node* &head){
    node* curr=head;
    head=curr->next;
    free(curr);
    return head;

}
node* deleAtend(node* &head){
    node* curr=head;
    while(curr->next->next!=nullptr){
        curr=curr->next;
    }
    delete (curr->next);
    curr->next=nullptr;
    return head;

}

void print(node* head){
    node* curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }

}

node* delAtpos(int pos,node* head){
    int cn=1;
    node* curr=head;
    while(cn<pos-1){
        curr=curr->next;
        cn++;
    }
    curr->next=curr->next->next;
    delete (curr->next);
    return head;

}



int main()
{
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    cout<<"Before Deletion ";
    print(head);
    cout<<"\n";
    cout<<"After Deletion ";
    //deleAtbeg(head);
    //deleAtend(head);
    delAtpos(2,head);
    print(head);
    return 0;
}
