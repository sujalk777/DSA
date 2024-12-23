#include<iostream>
#include<queue>
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
node*builtree(){
    int data;
    cin>>data;
    if(data==-1) return NULL;
    node*root=new node(data);
    root->left=builtree();
    root->right=builtree();
    return root;
}
void preorder(node*root){
    if(!root) return NULL;
    cout<<root->data<<"  ";
    preorder (root->left);
    preorder(root->right;)
}
//inorder 
void inorder(node *root){
    if (!root) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//postorder 
void postorder(node*root ){
    if(!root) return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root ->data<<" ";
}
int countnodes(node*root){
    return (!root)?0:countnode(root->left)+countnode(root->right)+1;

}
void printlevelorder(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*f=q.front();
        q.pop();
        if(f!=NULL){
            cout<<f->data<<" ";
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
        else{
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
    }
}
node*buildlevelorder(){
    int data,left,right ;
    cout<<"enter the data for root node\n";
    cin>>data;
    if(data==-1) return NULL;
    node*root=new node(data);
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node*f=q.front();
        q.pop();
        cout<<"enter the children of ";
        cin>>left>>right;
        if(left!=-1){
            f->left=new node(root);
            q.push(f->left);
        }
        if(right!=-1){
            f->right=new node(right);
            q.push(f->right);
        }
    }
    return root;
}
int main(){
    
    return 0;
}