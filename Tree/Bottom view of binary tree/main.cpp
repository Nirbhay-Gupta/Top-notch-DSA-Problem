#include <bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node* right;
    node* left;
    node(int x){
        data=x;
        left=right=NULL;
    }
};

vector<int> topView(node* root){
    vector<int>v;
    if(root==NULL)return v;
    map<int,int>m;
    queue<pair<node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        node* value=it.first;
        int line=it.second;
        m[line]=value->data;

        if(value->left!=NULL){
            q.push({value->left,line-1});
        }
        if(value->right!=NULL)
            q.push({value->right,line+1});
    }
    for(auto it:m){
        v.push_back(it.second);
    }
    return v;
}




int main()
{

    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    root->right->right=new node(6);
    vector<int>res=topView(root);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";

    return 0;
}
