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
        return (max(height(root->left),height(root->right))+1);
    }
}

void printk(node* root,int k){
    if(root==NULL)
        return;



    if(k==0){
        cout<<root->data<<" ";


    }
    else{
        printk(root->left,k-1);
        printk(root->right,k-1);
    }
}

void level(node* root){
    if(root==NULL) return;
    queue<node*>q ;
    q.push(root);
    while(q.empty()==false){
        node* curr=q.front();
        cout<<curr->data<<" ";
        q.pop();
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}

int main()
{
    node* root =new node(10);
    root->left=new node(20);
    root->left->left=new node(8);
    root->left->right=new node(7);
    root->left->right->left=new node(9);
    root->left->right->right=new node(15);
    root->right=new node(30);
    root->right->right=new node(6);


    /*int h=height(root);
    //cout<<"height"<<" "<<h;
    int i= 0;
    while(h){
        printk(root,i);
        i++
        ;
    }
    */
    level(root);



    return 0;
}
