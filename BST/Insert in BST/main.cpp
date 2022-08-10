

#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data=x;
        left=right=NULL;

    }
};






bool search(node* root,int x){
    if(root==NULL)return false;
    while(root!=NULL){
        if(root->data==x)return true;
        else if(root->data<x)
            root=root->right;
        else
            root=root->left;
    }
    return false;
}


node* insert(node* root,int x){
    if(root==NULL)return new node(x);
    else if(root->data>x){
        root->left=insert(root->left,x);
    }
    else if(root->data<x){
        root->right=insert(root->right,x);
    }

    return root;

}

node* onceInsert(node* root,int x){
    node* temp=new node(x);
    node* parent=NULL,*curr=root;
    while(!curr){
        parent=curr;
        if(curr->data>x)
            curr=curr->left;
        else if(curr->data<x)
            curr=curr->right;
        else
            return root;
    }
    if(parent==NULL)
        return temp;
    if(parent->data>x)
        parent->left=temp;
    else
        parent->right=temp;

    return root;
}

int main()
{
    node* root=new node(15);
    root->left=new node(5);
    root->left->left=new node(3);
    root->right=new node(20);
    root->right->right=new node(80);
    root->right->left=new node(18);
    root->right->left->left=new node(16);
    node* res=onceInsert(root,16);
    cout<<search(res,16);

    return 0;
}
