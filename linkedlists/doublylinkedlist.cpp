// doublylinkedlist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

struct node {
    node* prev;
    int data;
    node* next;
};

node* head = NULL;

node* createnode(int x) {
    node* temp = new node();
    temp->data = x;
    temp->prev = NULL;
    temp->next = NULL;
    return temp;
}

void insertathead(int n) {
    node* temp = createnode(n);
    if (head == NULL) {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void outputfront() {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void outputback() {
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
}

int main()
{
    cout << "\tDoubly Linked List\n";
    insertathead(10);
    insertathead(20);
    insertathead(30);
    insertathead(40);
    insertathead(50);
    insertathead(90);
    insertathead(900);
    cout << "Output from Front ";
    outputfront();
    cout << "\nOutput from Back ";
    outputback();
}
