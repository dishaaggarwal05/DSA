// [Q->1] While traversing a single-circular linked list, which condition establishes that the traversing element/variable has reached the first element?
//[A->1]
#include <iostream>
using namespace std;
// Creating Node class
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void append(Node *&head, int data)
{
    Node *temp = head;
    Node *new_node = new Node(data);
    if (temp == NULL)
    {
        head = new_node;
        new_node->next = head;
        return;
    }
    while (temp->next != head)
    {
        temp = temp->next;
    } 
    temp->next = new_node;
    new_node->next = head;
}

void pfun(Node *&head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    Node *head = NULL;
    append(head, 1);
    append(head, 2);
    append(head, 3);
    pfun(head);
}

// [Q->2] What are the practical applications of a circular linked list? 
/*Application of Circular Linked Lists:
->Circular Linked Lists can be used to manage the computing resources of the computer.
->Data structures such as stacks and queues are implemented with the help of the circular linked lists.
->Circular Linked List is also used in the implementation of advanced data structures such as a Fibonacci Heap.
->It is also used in computer networking for token scheduling. */

// DISHA AGGARWAL
// 21105082
