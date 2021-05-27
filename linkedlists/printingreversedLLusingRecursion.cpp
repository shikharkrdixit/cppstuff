// printingreversedLinkedListusingRecursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* link;
};

//node* head = NULL;

node* Insert(int n,node* head) {
    node* temp = new node();
    temp->data = n;
    temp->link = NULL;
    if (head == NULL) {
        head = temp;
    }
    else {
        node* temp2 = head;
        while (temp2->link != NULL) {
            temp2 = temp2->link;
        }
        temp2->link = temp;
    }
    return head;
}

void print(node* head) {
    if (head == NULL)return;
    cout << head->data << " ";
    print(head->link);
}

void revprint(node* head) {
    if (head == NULL)return;
    revprint(head->link);
    cout << head->data << " ";
}
int main()
{
    cout << "\tReversing LL using Recursion\n";
    node* head = NULL;
    head = Insert(59,head);
    head = Insert(99, head);
    head = Insert(149, head);
    head = Insert(94, head);
    cout << "Before Reversing ";
    print(head);
    cout << "\nAfter Reversing ";
    revprint(head);
    return 0;
}
