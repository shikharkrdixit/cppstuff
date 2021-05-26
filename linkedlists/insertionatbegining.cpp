// insertionatbegining.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* link;
};

node* head = NULL;

void inpatbegin(int n) {
    node* temp = new node();
    temp->data = n;
    temp->link = head;
    head = temp;
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
    cout << "\tInsertion at beginning in Linked Lists\n";
    inpatbegin(10);
    inpatbegin(15);
    inpatbegin(9);
    inpatbegin(8);
    inpatbegin(16);
    inpatbegin(19);
    cout << "Output : \t";
    output();
    return 0;
}