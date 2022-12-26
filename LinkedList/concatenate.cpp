#include <iostream>
#include "class.cpp"
using namespace std;

Node *con(Node *&head1, Node *&head2)
{

    cout << "con function is called" << endl;

    Node *temp = head1;

    while (head1 != NULL)
    {
        if(head1->next == NULL){
            break;
        }
        head1 = head1->next;
        
    }

    head1->next = head2;

    return temp;
}

int main()
{

    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);

    node1->next = node2;
    node2->next = node3;

    Node *head1 = node1;

    Node *node4 = new Node(40);
    Node *node5 = new Node(50);
    Node *node6 = new Node(60);

    node4->next = node5;
    node5->next = node6;

    Node *head2 = node4;

    Node *head = con(head1, head2);

    print(head);
    // print(head1);

    return 0;
}