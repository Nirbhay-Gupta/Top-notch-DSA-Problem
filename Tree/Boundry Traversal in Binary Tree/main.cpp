#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};

void printLeaves(node* root){
    if(root==NULL) return;
    printLeaves(root->left);
    if(root->left==NULL && root->right==NULL)
        cout<<root->data<<" ";

    printLeaves(root->right);
}

void printLeft(node* root){
    if(root==NULL)return;
    if(root->left!=NULL){
        cout<<root->data<<" ";
        printLeft(root->left);
    }
    else if(root->right!=NULL){
        cout<<root->data<<" ";
        printLeft(root->right);
    }
}
void printRight(node* root){
    if(root==NULL) return;
    if(root->right!=NULL){

        printRight(root->right);
        cout<<root->data<<" ";
    }

    else if(root->left!=NULL){

        printRight(root->right);
        cout<<root->data<<" ";
    }
}

void printBoundry(node* root){
    if(root==NULL)return;

    printLeft(root);
    printLeaves(root->left);
    printLeaves(root->right);
    printRight(root->right);
}





int main()
{
    node* root=new node(1);
    root->left=new node(2);

    root->right=new node(3);
    root->right->right=new node(5);
    root->right->left=new node(4);
    root->right->left->left=new node(6);
    root->right->left->right=new node(7);
    printBoundry(root);






    return 0;
}
