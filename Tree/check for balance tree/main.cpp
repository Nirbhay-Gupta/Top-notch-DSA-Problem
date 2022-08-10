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
    if(root==NULL) return 0;
    else{
        return max(height(root->left),height(root->right))+1;
    }
}

/*bool isBalance(node* root){
    if(root==NULL)return true;
    int lh=height(root->left);
    int rh=height(root->right);
    return abs(lh-rh)<=1 &&
    isBalance(root->left)&& isBalance(root->right);
}
*/
bool isBalanced(node* root){
    if(root==NULL)return NULL;
    int lh=isBalanced(root->left);
    if(lh==-1) return -1;
    int rh=isBalanced(root->right);
    if(rh==-1)return -1;
    if(abs(lh-rh)>1) return -1;
    else{
        return max(lh,rh)+1;
    }

}


int main()
{
    node* root=new node(3);
    root->left=new node(4);
    root->left->left=new node(5);
    cout<<isBalanced(root);


}
