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

void level(node* root){
    if(root==NULL) return;
    queue<node*>q;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        for(int i=0;i<count;i++){
            node* curr=q.front();
            q.pop();
            cout<<curr->data<<" ";

            if(root->left!=NULL){
                q.push(root->left);
            }
            if(root->right!=NULL){
                q.push(root->right);

            }

        }
    }
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

    level(root);

    return 0;
}
