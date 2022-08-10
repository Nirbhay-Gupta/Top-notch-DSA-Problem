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
    if(root->data>x)
        return search(root->left,x);
    else if(root->data<x)
        return search(root->right,x);
    else
        return true;
}

node* suc(node* root){
    root=root->right;
    while(!root && !root->left)
        root=root->left;
    return root;
}

node* del(node* root,int x){
    if(root==NULL)return root;

    if(root->data>x)
        root->left=del(root->left,x);
    else if(root->data<x)
        root->right=del(root->right,x);

    else{
        if(root->left==NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }
        else{
            node* s=suc(root);
            root->data=s->data;
            root->right=del(root->right,s->data);
        }
    }
    return root;
}

int main()
{
    node* root=new node(50);
    root->left=new node(30);
    root->left->left=new node(20);
    root->left->right=new node(40);
    root->right=new node(70);
    root->right->left=new node(60);
    root->right->right=new node(80);

    cout<<"Before del"<<endl;
    cout<<search(root,50);
    cout<<endl;

    del(root,50);
    cout<<"asfer del"<<endl;
    cout<<search(root,50);


    return 0;
}
