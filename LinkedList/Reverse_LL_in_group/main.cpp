#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;

    }
};

node* reverseGroup(node* head,int k){
    int count=0;
    node* curr=head;
    node* prev=NULL,*next=NULL;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        node* rest_head=reverseGroup(next,k);
        head->next=rest_head;
    }
    return prev;
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
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    node* temp=reverseGroup(head,2);
    print(temp);



    return 0;
}
