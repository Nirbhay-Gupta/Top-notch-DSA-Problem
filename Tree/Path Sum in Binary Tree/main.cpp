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

/*bool pathSum(node* root,int sum){
    if(root==NULL)return false;
    if(root->data==sum && root->left==NULL && root->right==NULL)return true;
    return pathSum(root->left,sum-root->data)||pathSum(root->right,sum-root->data);
}
*/
bool iterPath(node* root,int sum){
    if(root==NULL)return false;
    queue<node*>Node;
    queue<int>value;
    Node.push(root);
    value.push(root->data);
    int sumValue=0;
    while(!Node.empty()){
        node* curr=Node.front();
        Node.pop();
        sumValue=value.front();
        value.pop();
        if(curr->left==NULL && curr->right==NULL && sumValue==sum)return true;
        if(curr->left!=NULL){
            Node.push(curr->left);
            value.push(sumValue+curr->left->data);

        }
        if(curr->right!=NULL){
            Node.push(curr->right);
            value.push(sumValue+curr->right->data);
        }
    }
    return false;

}


bool itPathSum(node* root,int sum){
    if(root==NULL)return false;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* curr=q.front();

        q.pop();
        if(curr->data==sum && curr->left==NULL && curr->right==NULL)return true;
        if(curr->left!=NULL){
            curr->left->data+=curr->data;
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            curr->right->data+=curr->data;
            q.push(curr->right);
        }
    }
    return false;
}

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right=new node(3);
    cout<<itPathSum(root,8);

    return 0;
}
