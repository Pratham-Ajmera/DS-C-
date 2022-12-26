#include<iostream>
#include "class.cpp"
using namespace std;

void inOrderTraversal(Node* root){

    if(root == NULL){
        return ;
    }

    inOrderTraversal(root->left);

    cout<<root->data<<" ";

    inOrderTraversal(root->right);

}

void preOrderTraversal(Node* root){

    if(root== NULL){
        return ;
    }

    cout<<root->data<<" ";

    preOrderTraversal(root->left);

    preOrderTraversal(root->right);
}

void postOrderTraversasl(Node* root){

    if(root== NULL){
        return ;
    }

    postOrderTraversasl(root->left);

    postOrderTraversasl(root->right);

    cout<<root->data<<" ";
}

int main(){

    Node* root = NULL;

    root = create(root);

    cout<<"Printing Inorder traversal"<<endl;
    inOrderTraversal(root);

    cout<<endl;
    cout<<"Printing Preorder traversal"<<endl;
    preOrderTraversal(root);

    cout<<endl;
    cout<<"Printing Postorder traversal"<<endl;
    postOrderTraversasl(root);

    return 0;



}