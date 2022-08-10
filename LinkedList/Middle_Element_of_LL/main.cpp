#include <iostream>

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

//Naive Solution coz take two traversal
void midData(node* head){
    int cn=0;
    node* curr;
    for(curr=head;curr!=NULL;curr=curr->next){cn++;}
    curr=head;
    for(int i=0;i<cn/2;i++){
        curr=curr->next;
    }
    cout<<curr->data;
}

//Efficient solution take only one traversal

void middle(node* head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL ){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data;
}


int main()
{
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);


    cout<<endl;
    midData(head);


    return 0;
}
