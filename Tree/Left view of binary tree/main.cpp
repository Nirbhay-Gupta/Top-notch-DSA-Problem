
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
void recur(node* root,int level,vector<int>&v){
    if(root==NULL)return;

    if(level==v.size())
        v.push_back(root->data);
    recur(root->left,level+1,v);
    recur(root->right,level+1,v);

}

void leftView(node* root){
    vector<int>v;
    recur(root,0,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}



int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    leftView(root);

    return 0;
}
