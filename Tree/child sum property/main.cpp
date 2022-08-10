
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

bool childSum(node* root){
    if(root==NULL)return true;
    if(root->left==NULL && root->right==NULL) return true;
    int sum=0;
    if(root->left!=NULL){
        sum+=root->left->data;
    }
    if(root->right!=NULL){
        sum+=root->right->data;
    }
    return (root->data==sum &&
    childSum(root->left)&& childSum(root->right));
}


int main()
{
    /*node* root=new node(10);
    root->left=new node(30);
    root->left->left=new node(80);
    root->left->left->right=new node(70);
    root->right=new node(40);
    root->right->right=new node(20);
    root->right->left=new node(60);
    cout<<childSum(root);
    */
    node* root1=new node(10);
    root1->left=new node(8);
    root1->right=new node(2);
    root1->right->left=new node(2);
    cout<<childSum(root1);
    return 0;
}
