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

int Ndel(node* head,int n){
    int cn=0;
    node* curr=head;
    while(curr){
        cn++;
        curr=curr->next;

    }
    curr=head;
    int pos=1;
    while(pos<cn-(n-1)){
        pos++;
        curr=curr->next;
    }
    return curr->data;


}

int NthEnd(node* head,int n){
    if(head==NULL) return -1;
    node* first= head;
    for(int i=0;i<n;i++){
        if(first==NULL) return -1;
        first=first->next;
    }
    node* second=head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    return (second->data);
}

int main()
{
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    print(head);
    cout<<endl;
    cout<<NthEnd(head,3);

    return 0;
}
