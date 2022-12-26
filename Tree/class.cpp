#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
Node* create(Node* root){

    cout<<"Enter data"<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data ==-1){
        return NULL;
    }
    cout<<"Enter Left of"<<data<<endl;
    root->left=create(root->left);
    cout<<"Enter right of"<<data<<endl;
    root->right=create(root->right);

    return root;

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 ~

}