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

bool isPresent(node* root,int x){
    if(root==NULL)return false;
    if(root->data==x)return true;
    if(x>root->data){
        return isPresent(root->right,x);
    }
    if(x<root->data){
       return isPresent(root->left,x);
    }
    return false;
}

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

int main()
{
    node* root=new node(15);
    root->left=new node(5);
    root->left->left=new node(3);
    root->right=new node(20);
    root->right->right=new node(80);
    root->right->left=new node(18);
    root->right->left->left=new node(16);
    cout<<search(root,22);

    return 0;
}
