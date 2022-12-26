#include<iostream>
using namespace std;
int main(){
    class node{
        public:
        int data;
        node * next;

        node(int data){
            this-> data = data;
            next= NULL;
        }

    };

    node *head = new node(5);
    cout<<head->data;


}