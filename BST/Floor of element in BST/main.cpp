#include <iostream>

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
node* floorBst(node* root,int x){
    node* res=NULL;
    while(!root){
        if(root->data==x)
            return root;
        else if(root->data>x)
            root=root->left;
        else{
            res=root;
            root=root->right;
        }
    }
    return res;

}

int main()
{


    node* root=new node(10);
    root->left=new node(5);
    root->right=new node(15);
    root->right->left=new node(12);
    root->right->right=new node(30);
    node* ans=floorBst(root,100);
    cout<<ans->data;

    return 0;
}
