#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data=x;
        next=NULL;
    }
};
int main(){
    Node* head=new Node(10);
   /* Node* temp1=new Node(20);
    Node* temp2=new Node(30);

    head->next=temp1;
    temp1->next=temp2;
    cout<<head->data<<" "<<temp1->data<<" "<<temp2->data<<endl;
    cout<<head->data<<" "<<head->next->data<<" "<<head->next->next->data<<endl;
    */

    //short method for creation

    head->next=new Node(40);
    head->next->next=new Node(60);
    cout<<head->data<<" "<<head->next->data<<" "<<head->next->next->data<<endl;

    return 0;
}
