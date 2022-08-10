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
int empty=-1;
void serialize(node* root,vector<int>&v){


    if(root==NULL){
        v.push_back(empty);
        return;

    }

    v.push_back(root->data);
    serialize(root->left,v);
    serialize(root->right,v);


    }


int main()
{

    vector<int>v;
    node* root=new node(10);
    root->left=new node(20);
    root->left->left=new node(30);
    root->right=new node(40);
    serialize(root,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
