#include<iostream>
using namespace std;
class node{
public:
    int data;
    node*left,*right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};
node*buildtree(){
    int data;
    cin>>data;
    if (data=-1) return NULL ;
    node*root=new node(data);
    root->left=buildtree();
    root->right=buildtree();
    return root;
}
//pre order
void preorder(node*root){
    if(!root) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//postorder
void postorder(node*root){
    if(!root){
        return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
void inorder(node*root){
    if(!root) return;
    postorder(root->left);
    postorder(root->left);
    cout<<root<< " ";

}
int countnode(node*root){
    return(!root)?0:max(countnode(root->left),countnode(root->right));

}
int diameter(node*root){
    if(!root)return 0;
    int op1;

}
int main(){
    return 0;
}