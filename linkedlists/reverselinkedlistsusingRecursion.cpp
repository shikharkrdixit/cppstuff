// P4.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
