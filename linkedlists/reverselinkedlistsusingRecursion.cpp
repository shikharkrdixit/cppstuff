// reverselinkedlistsusingRecursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* link;
};

node* head = NULL;

void Insert(int n) {
    node* temp = new node();
    temp->data = n;
    temp->link = NULL;
    if (head == NULL) {
        head = temp;
        return;
    }
    node* temp2 = head;
    while (temp2->link != NULL) {
        temp2 = temp2->link;
    }
    temp2->link = temp;
}

void reversellrec(node* ptr) {
    if (ptr->link == NULL) {
        head = ptr;
        return;
    }
    reversellrec(ptr->link);
    node* pt = ptr->link;
    pt->link = ptr;
    ptr->link = NULL;
}

void output() {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->link;
    }
}

int main()
{
    cout << "\tReversing Linked List Using Recursion\n";
    Insert(12);
    Insert(15);
    Insert(16);
    Insert(19);
    Insert(25);
    Insert(39);
    cout << "Before Reversing ";
    output();
    reversellrec(head);
    cout << "\nAfter Reversing ";
    output();
    return 0;
}