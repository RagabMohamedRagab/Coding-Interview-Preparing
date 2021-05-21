/*
Arrays can be used to store linear data of similar types, but arrays have the following limitations.
1) The size of the arrays is fixed: So we must know the upper limit on the number of elements in advance. Also, generally, the allocated memory is equal to the upper limit irrespective of the usage.
2) Inserting a new element in an array of elements is expensive because the room has to be created for the new elements and to create room existing elements have to be shifted.

For example, in a system, if we maintain a sorted list of IDs in an array id[].

id[] = [1000, 1010, 1050, 2000, 2040].



And if we want to insert a new ID 1005, then to maintain the sorted order, we have to move all the elements after 1000 (excluding 1000).
Deletion is also expensive with arrays until unless some special techniques are used. For example, to delete 1010 in id[], everything after 1010 has to be moved.

Advantages over arrays
1) Dynamic size
2) Ease of insertion/deletion

Drawbacks:
1) Random access is not allowed. We have to access elements sequentially starting from the first node. So we cannot do binary search with linked lists efficiently with its default implementation. Read about it here.
2) Extra memory space for a pointer is required with each element of the list.
3) Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.

Representation:
A linked list is represented by a pointer to the first node of the linked list. The first node is called the head. If the linked list is empty, then the value of the head is NULL.
Each node in a list consists of at least two parts:
1) data
2) Pointer (Or Reference) to the next node
In C, we can represent a node using structures. Below is an example of a linked list node with integer data.
In Java or C#, LinkedList can be represented as a class and a Node as a separate class. The LinkedList class contains a reference of Node class type.
*/



#include <bits/stdc++.h>
using namespace std;

//define the class of the node
class Node
{
public:
    int data;
    Node* next;
};

void printList(Node* n)
{
    while(n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
}
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    /* Three blocks have been allocated dynamically.
     We have pointers to these three blocks as head,
     second and third
     head         second         third
         |             |             |
         |             |             |
     +---+-----+     +----+----+     +----+----+
     | # | # |     | # | # |     | # | # |
     +---+-----+     +----+----+     +----+----+
     */

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 5;
    head->next = second;
    second->data = 6;
    second->next = third;
    third->data = 10;

    /* data has been assigned to the data part of first
    block (block pointed by the head). And next
    pointer of the first block points to second.
    So they both are linked.

    head         second         third
        |             |             |
        |             |             |
    +---+---+     +----+----+     +-----+----+
    | 5 | o----->| # | 6 |     | # | # |
    +---+---+     +----+----+     +-----+----+
    */

    printList(head);
}
