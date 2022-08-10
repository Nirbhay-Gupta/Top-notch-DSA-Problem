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

int maxValue(node* root){
    if(root==NULL)
        return INT_MIN;



    return max(root->data, max(maxValue(root->left),maxValue(root->right)));
}

int main()
{
    node* root=new node(10);
    root->left=new node(30);
    root->left->left=new node(80);
    root->left->left->right=new node(70);
    root->right=new node(40);
    root->right->right=new node(20);
    root->right->left=new node(60);
    cout<<maxValue(root);

    return 0;
}
