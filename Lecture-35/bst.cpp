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
node*insertinbst(node*root,int data){
    if(!root){
        root=new node(data);
        return root;
    }
    if(data<root->data){
        root->left=insertinbst(root->left,data);
    }
    else{
        root->right=insertinbst(root->right,data);
    }
    return root;
}
node*createbst(){
    //yeh ek ek karke input lega aur insert bst ko call karega
    node*root=NULL;
    int data;
    cin>>data;
    while(data!=-1){
        root=insertinbst(root,data);
        cin>>data;
    }
    return root;
}
//check balanced bst
class Pair{
    public:
    int height;
    bool isbalanced;
    Pair(){
        height=0;
        isbalanced=true;
    }
};
Pair isbalancedtree(node*root){
    Pair p;
    //base case 

    //reucursive case 
    Pair left=isbalancedtree(root->left);
    Pair right=isbalancedtree(root->right);
    p.height=max(left.height,right.height)+1;
    if(abs(left.height-right.height)<=1 and left.isbalanced and right.isbalanced)
        p.isbalanced=true;
    else p.isbalanced=false ;
    return p;
}
//sorted array to balanced bst
node*arraybalancedbst(int*a,int s,int e){
    //base case 
    if(s>e) return NULL;
    //recursive case
    int m=(s+e)/2;
    node*root=new node(a[m]);
    root->left=arraybalancedbst(a,s,m-1);
    root->right=arraybalancedbst(a,m+1,e);
    return root;
}
//bst ko sorted ll main kon badlega bhai mere
class linkedlist{
    public:
    node*head,*tail;
};
linkedlist bsttoll(node*root){
    linkedlist l;
    //base case

    //recursive case 
    if(root->left and root->right){
        linkedlist left=bsttoll(root->left);
        linkedlist right=bsttoll(root->right);
        left.tail->right=root;
        root->right=right.head;
        
    }
}