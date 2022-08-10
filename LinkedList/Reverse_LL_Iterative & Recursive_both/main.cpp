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

//Naive sol take two traversal T(n) = O(n) and space complexity=O(n)

node* revList(node* &head){
    vector<int>arr;
    for(node* curr=head;curr!=NULL;curr=curr->next)
        arr.push_back(curr->data);

    for(node* curr=head;curr!=NULL;curr=curr->next){
        curr->data=arr.back();
        arr.pop_back();
    }
    return head;
}

node* reverse(node* head){
    node* curr=head;
    node* prev=NULL;
    while(curr){
        node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return prev;
}

//Recursive reverse

node* revRec(node* head){
    if(head==NULL || head->next==NULL) return head;

    node* rest_head=revRec(head->next);
    node* tail_rest=head->next;
    tail_rest->next=head;
    head->next=NULL;
    return rest_head;
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
    print(head);

    revRec(head);
    cout<<endl;
    print(head);

    return 0;
}
