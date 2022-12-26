#include<iostream>
#include"class.cpp"
using namespace std;
int main(){
    Node* head = new Node(10);
    print(head);
    cout<<"ppp"<<endl;
    insertAtHead(head,20);
    print(head);
}