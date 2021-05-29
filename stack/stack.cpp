// stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

node* top = NULL;
void push(int x) {
    node* temp = new node();
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop() {
    if (top == NULL) {
        cout << "\nUnderflow\n";
        return;
    }
    node* temp = top;
    top = top->next;
    delete(temp);
}

void display() {
    node* temp = top;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    cout << "\tStack Implementation\n";
    push(10);
    push(20);
    push(30);
    push(40);
    cout << "elements contained ";
    display();
    cout << "\ndeleting from stack...\n";
    pop();
    cout << "after deletion ";
    display();
    return 0;
}
