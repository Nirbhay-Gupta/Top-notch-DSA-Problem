#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data= x;
        left=NULL;
        right=NULL;
    }
};

int total(node* root){
    if(root==NULL)
        return 0;

    return ((total(root->left)+total(root->right))+1);
}

int main()
{
    node* root=new node(10);
    root->left=new node(20);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right=new node(30);
    root->left->right=new node(60);
    root->left->right->left=new node(70);
    root->left->right->right=new node(80);

    /*node* root1=new node(80);
    root1->left=new node(30);
    root1->left->left=new node(90);
    root1->right=new node(40);
    root1->right->right=new node(100);
    root1->right->right->left=new node(60);
    */

    cout<<total(root);

    return 0;
}
