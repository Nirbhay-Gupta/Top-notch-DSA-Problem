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

void printSpiral(node* root){
    if(root==NULL)return;
    queue<node*>q;
    stack<int>s;
    bool reverse3=false;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
            node* curr=q.front();
            if(reverse3 ){
                s.push(root->data);
            }
            else
                cout<<curr->data;
        }
        if(root->left!=NULL){
            q.push(root->left);
        }
        if(root->right!=NULL){
            q.push(root->right);
        }


    if(reverse3){
        while(s.empty()==false){
            cout<<s.top();
            s.pop();
        }
    }
    reverse3=!reverse3;
    cout<<endl;
}




int main()
{
    node* root=new node(10);
    root->left=new node(20);
    root->left->left=new node(40);
    root->left->left->left=new node(80);
    root->right=new node(30);
    root->right->left=new node(50);
    root->right->left=new node(60);
    printSpiral(root);

    return 0;
}
