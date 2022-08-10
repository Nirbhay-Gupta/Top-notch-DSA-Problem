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

void kDis(node* root,int k){
    if(root==NULL) return;
    if(k==0)
        cout<<root->data<<" ";

    else{
        kDis(root->left,k-1);
        kDis(root->right,k-1);
    }
}



int main()
{
    node* root=new node(10);
    root->left=new node(20);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right=new node(30);
    root->right->right=new node(70);



    kDis(root,1);


    return 0;
}
