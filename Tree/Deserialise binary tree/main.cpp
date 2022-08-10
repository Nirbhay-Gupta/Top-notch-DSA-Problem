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
const int empty=-1;

node* deserial(vector<int>&v){
    int index=0;
    if(index==v.size())return NULL;
    int val=v[index];
    index++;
    if(val==empty) return NULL;

    node* root=new node(val);
    root->left=deserial(v);
    root->right=deserial(v);
    return root;

}

/*void inorder(node* root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
*/

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    node* res=deserial(v);
    cout<<(res->data);




    return 0;
}
