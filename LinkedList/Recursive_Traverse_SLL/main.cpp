#include <iostream>

using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int x){
        data=x;
        next=NULL;
    }
};

void rPrint(Node*head){
    if(head==NULL)
        return;

    cout<<head->data<<" ";
    rPrint(head->next);

}

int main(){
    Node* head=new Node(10);
    Node* temp1=new Node(20);
    Node* temp2=new Node(30);
    Node* temp3=new Node(40);

    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;

    rPrint(head);

    return 0;

}
