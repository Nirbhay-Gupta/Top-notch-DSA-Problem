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



void mirror(node* root){
    if(root==NULL) return ;


    mirror(root->left);
    mirror(root->right);
    node* temp=root->left;
    root->left=root->right;
    root->right=temp;




}
void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->left->left=new node(7);
    root->left->left->right=new node(8);
    root->right=new node(3);
    root->right->left=new node(5);
    root->right->right=new node(6);
    cout<<"Before mirror"<<endl;
    inorder(root);
    cout<<"After mirror"<<endl;
    mirror(root);
    inorder(root);

    return 0;
}
