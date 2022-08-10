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

node* mergeSortLL(node* l1,node* l2){
    if(l1==NULL)return l2;
    if(l2==NULL)return l1;
    node* curr=NULL,*prev=NULL;
    if((l1->data)<=(l2->data)){
        curr=prev=l1;
        l1=l1->next;
    }
    else{
        curr=prev=l2;
        l2=l2->next;
    }
    while(l1!=NULL && l2!=NULL){
        if((l1->data)<=(l2->data)){
            prev->next=l1;prev=l1;l1=l1->next;
        }
        else{
            prev->next=l2;prev=l2;l2=l2->next;
        }
    }
    if(l1==NULL)
        prev->next=l2;

    else
        prev->next=l1;

    return curr;
}

int main()
{
    node* l1=new node(10);
    l1->next=new node(20);
    l1->next->next=new node(30);
    l1->next->next->next=new node(40);

    node* l2=new node(5);
    l2->next=new node(15);
    l2->next->next=new node(35);

    node* res=mergeSortLL(l1,l2);
    print(res);

    return 0;
}
