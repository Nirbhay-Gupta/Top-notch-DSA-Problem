

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

void removeDup(node* head){
    node* curr=head;
    while(curr!=NULL && curr->next!=NULL){

        if(curr->data==curr->next->data){
            node* temp=curr->next;
            curr->next=curr->next->next;
            delete temp;

        }
        else{
            curr=curr->next;
        }



    }


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
    head->next->next=new node(20);
    head->next->next->next=new node(40);
    removeDup(head);
    print(head);



    return 0;
}

