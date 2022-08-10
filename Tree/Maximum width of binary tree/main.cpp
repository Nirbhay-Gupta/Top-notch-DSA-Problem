

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

int maxWidth(node* root){
    if(root==NULL)return 0;
    queue<node*>q;
    q.push(root);
    int res=0;
    while(q.empty()==false){
        int count=q.size();
        res=max(res,count);
        for(int i=0;i<count;i++){
            node* curr=q.front();
            q.pop();
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
    }
    return res;
}

int main()
{
    node* root=new node(8);
    root->left=new node(30);
    root->left->left=new node(90);
    root->left->right=new node(100);
    root->right=new node(20);
    root->right->left=new node(70);
    root->right->right=new node(300);

    cout<<maxWidth(root);

    return 0;
}
