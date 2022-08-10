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

int height(node* root){
    if(root==NULL)
        return 0;
    else{
        return max(height(root->left),height(root->right))+1;
    }
}

int main()
{
    node* root=new node(10);
    root->right=new node(20);
    root->right->right=new node(30);


    cout<<height(root);

    return 0;
}
