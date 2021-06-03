// queueLinkedLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct queue {
    int data;
    queue* next;
};
queue* front = NULL;
queue* rear = NULL;

void enqueue(int x) {
    queue* temp = new queue();
    temp->data = x;
    temp->next = NULL;
    if (front == NULL and rear == NULL) {
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

void dequeue() {
    if (front == NULL) {
        cout << "\nUnderflow\n";
        return;
    }
    else
        if (front == rear) {
            front = rear = NULL;
            return;
        }
    queue* ptr = front;
    front = front->next;
    delete(ptr);
}

void display() {
    queue* temp = front;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int frontval() {
    return front->data;
}

int main()
{
    cout << "\tQueue Implementation\n";
    enqueue(15);
    enqueue(20);
    enqueue(38);
    enqueue(45);
    enqueue(95);
    enqueue(99);
    cout << "elements ";
    display();
    dequeue();
    cout << "\ndequeueing  ";
    display();
    cout << "\nelement at the front " << frontval();
    return 0;
}