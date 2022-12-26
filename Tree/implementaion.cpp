#include<iostream>
#include"class.cpp"
using namespace std;


// Node* create(Node* root){

//     cout<<"Enter data"<<endl;
//     int data;
//     cin>>data;
//     root = new Node(data);

//     if(data ==-1){
//         return NULL;
//     }
//     cout<<"Enter Left of"<<data<<endl;
//     root->left=create(root->left);
//     cout<<"Enter right of"<<data<<endl;
//     root->right=create(root->right);

//     return root;

// }




int main(){

    Node* head = NULL;
    Node* bt =create(head);
    return 0;

}