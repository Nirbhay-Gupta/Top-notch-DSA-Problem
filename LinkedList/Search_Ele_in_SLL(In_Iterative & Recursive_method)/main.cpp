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

node* insertAtbeg(node* head,int data){

    node* curr=head;
    node* temp=new node(data);
    if(head==NULL) return temp;

    temp->next=head;
    head=temp;
    return head;


}
void print(node* head){
    node* curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

//Search Iterative method

int searchEle(node* head,int Ele){
    node* curr=head;
    int cn=1;
    while(curr){

        if(curr->data==Ele)
            return cn;

        else{
            curr=curr->next;
            cn++;
        }
    }
    return -1;
}

//search Recursive method
int searchRec(node* head,int Ele){
    int cn=1;
    if(head==NULL) return -1;
    if(head->data==Ele){
        return 1;

    }
    else{
       int res=searchRec(head->next,Ele);
       if(res==-1) return -1;
       else
        return (res+1);
    }
}

int main()
{


    node* head=NULL;
    head=insertAtbeg(head,10);
    head=insertAtbeg(head,20);
    head=insertAtbeg(head,30);
    head=insertAtbeg(head,40);
    print(head);
    cout<<"\n";
    cout<<searchRec(head,30);


    return 0;
}
