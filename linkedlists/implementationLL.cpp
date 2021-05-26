// implementationLL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

//Implementation
struct node {
    int data;
    node* link;
};
node* head = NULL;
void input(int n) {
    node* temp = new node();
    temp->data = n;
    temp->link = NULL;
    if (head != NULL) {
        node* temp1 = head;
        while (temp1->link != NULL){
            temp1 = temp1->link;
        }
        temp1->link = temp;
        return;
    }
    head = temp;
}
void output() {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->link;
    }
}
void deletion() {
    node* temp = head;
    while (temp->link->link != NULL) {

    }
}
int main()
{
    int n;
    input(10);
    input(16);
    input(19);
    input(51);
    input(81);
    cout << "elements : ";
    output();
}
