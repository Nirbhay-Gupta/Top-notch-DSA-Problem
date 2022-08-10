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
void topOrder(node* root,int dist,map<int,vector<int>>&m){
    if(root==NULL)return;
    m[dist].push_back(root->data);
    topOrder(root->left,dist-1,m);
    topOrder(root->right,dist+1,m);
}
void printOrder(node* root){
    map<int,vector<int>>m;
    topOrder(root,0,m);
    map<int,vector<int>>::iterator it;
    for(it=m.begin();it!=m.end();it++)
        cout<<it->second[0]<<" ";
}



int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->left=new node(6);
    printOrder(root);

    return 0;
}
