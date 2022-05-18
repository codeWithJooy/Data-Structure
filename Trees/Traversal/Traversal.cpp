#include<iostream>
using namespace std;

struct Node{
  int data;
  struct Node *left,*right;
  Node(int data){
      this->data=data;
      this->left=NULL;
      this->right=NULL;
  }
};

void preOrderTraversal(struct Node *node){
   if(node==NULL){
       return;
   }
   
   cout<<node->data<<"->";
   preOrderTraversal(node->left);
   preOrderTraversal(node->right);
}

void inOrderTraversal(struct Node *node){
   if(node==NULL){
       return;
   }

   inOrderTraversal(node->left);
   cout<<node->data<<"->";
   inOrderTraversal(node->right);
}

void postOrderTraversal(struct Node *node){
   if(node==NULL){
       return;
   }

   postOrderTraversal(node->left);
   postOrderTraversal(node->right);
   cout<<node->data<<"->";
}

int main(){
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    cout<<"Pre-Order Traversal "<<endl;
    preOrderTraversal(root);
    cout<<endl;

    cout<<"In-Order Traversal "<<endl;
    inOrderTraversal(root);
    cout<<endl;

    cout<<"Post-Order Traversal ";
    postOrderTraversal(root);
    cout<<endl;

    return 0;
}
