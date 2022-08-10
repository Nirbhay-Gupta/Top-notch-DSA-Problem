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

    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while(curr!=head);

}

node* DelHead(node* head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node* curr=head;
    while(curr->next!=head)
        curr=curr->next;

    curr->next=head->next;
    delete head;

    return (curr->next);
}

node* Delk(node* head,int k){
    if(head==NULL) return head;
    if(k==1){
        return DelHead(head);
    }
    node* curr=head;
    for(int i=0;i<k-2;i++){
        curr=curr->next;
    }
    node* temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}

int main()
{
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=head;
    Delk(head,2);
    print(head);

    return 0;
}
