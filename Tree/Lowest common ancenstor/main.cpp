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

bool findPath(node* root,vector<node*>&v,int n){
    if(root==NULL)return false;
    v.push_back(root);
    if(root->data==n)return true;
    if(findPath(root->left,v,n)||findPath(root->right,v,n))
        return true;

    v.pop_back();
    return false;

}

node* lca(node* root,int n1,int n2){
    vector<node*>v1;
    vector<node*>v2;
    if((findPath(root,v1,n1)==false)|| findPath(root,v2,n2)==false)
        return NULL;

    for(int i=0;i<v1.size()-1 && v2.size()-1;i++){
        if(v1[i+1]!=v2[i+1])
            return v1[i];


    }
    return NULL;

}


node* LowestC(node* root,int n1,int n2){
    if(root==NULL) return NULL;
    if(root->data==n1 || root->data==n2)
            return root;
    node* lca1=LowestC(root->left,n1,n2);
    node* lca2=LowestC(root->right,n1,n2);
    if(lca1!=NULL && lca2!=NULL)
            return root;
    if(lca1!=NULL)
            return lca1;
    else
        return lca2;

}


int main()
{
    node* root = new node(10);
    root->left=new node(20);
    root->left->left=new node(30);
    root->left->right=new node(40);
    root->right=new node(50);

    node* res=LowestC(root,30,40);
    cout<<res->data;


    return 0;
}
