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

void iterInorder(node* root){
    stack<node*>s;
    if(root==NULL)return;
    s.push(root);
    while(s.empty()==false){
        node* curr=s.top();
        cout<<curr->data<<" ";
        s.pop();
        if(curr->right!=NULL){
            s.push(curr->right);

        }
        if(curr->left!=NULL){
            s.push(curr->left);
        }
    }




}

int main()
{
    node* root=new node(10);
    root->left=new node(20);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right=new node(30);
    root->right->left=new node(60);
    iterInorder(root);


    return 0;
}
