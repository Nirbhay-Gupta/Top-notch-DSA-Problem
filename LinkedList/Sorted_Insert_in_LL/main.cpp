#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void print(node* head){
    node* curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

node* sortInsert(node* head,int num){
    node* curr=head;
    node* temp=new node(num);

    if(head==NULL) return temp;

    if(num<head->data){
        temp->next=head;
        return temp;

    }
    while(curr->next!=NULL && num>curr->next->data){
        curr=curr->next;
    }

    temp->next= curr->next;
    curr->next= temp;

    return head;
}

int main(){

    //node* head=NULL;
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    sortInsert(head,25);
    print(head);

    return 0;
}
