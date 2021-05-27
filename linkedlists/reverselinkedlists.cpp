// reverselinkedlists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* link;
};

node* head = NULL;

void inpel(int n) {
    node* temp = new node();
    temp->data = n;
    temp->link = head;
    head = temp;
}

void reverse() {
    node* temp = head;
    node* nx;
    node* prev = NULL;
    while (temp != NULL) {
        nx = temp->link;
        temp->link = prev;
        prev = temp;
        temp = nx;
    }
    head = prev;
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
    cout << "\tReverse the elements in a Linked List\n";
    inpel(15);
    inpel(19);
    inpel(25);
    inpel(58);
    inpel(59);
    inpel(95);
    inpel(99);
    cout << "Before Reverse Operation ";
    output();
    reverse();
    cout << "\nAfter Reverse Operation ";
    output();
    return 0;
}