// insertatnposition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* link;
};

node* head = NULL;

void inpatbeg(int n) {
    node* temp = new node();
    temp->data = n;
    temp->link = head;
    head = temp;
}
void inpatnpos(int n,int pos) {
    node* temp = new node();
    temp->data = n;
    temp->link = NULL;
    
    int x = 1;
    node* temp1 = head;
    if (pos == 1) { inpatbeg(n); return; }
    else {
        while (x < pos) {
            temp1 = temp1->link;
            x++;
        }
        temp->link = temp1->link;
        temp1->link = temp;

    }
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
    cout << "Insertion at nth Position\n";

    inpatbeg(10);
    inpatbeg(25);
    inpatbeg(35);
    inpatbeg(45);

    cout << "Before Insertion ";
    output();

    inpatnpos(4, 1);
    cout << "\nAfter Insertion ";
    output();

}