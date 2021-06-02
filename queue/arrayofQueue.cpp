// arrayofQueue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#define maxsize 100
int ar[maxsize];
int front = -1;
int rear = -1;

bool isEmpty() {
    return (front == -1 and rear == -1);
}

bool isFull() {
    return rear == maxsize;
}
void enqueue(int x) {
    if (isEmpty()) {
        front++;
        rear++;
    }
    else if (isFull()) {
        cout << "Overflow";
        return;
    }
    else { rear++; }
    ar[rear] = x;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Underflow";
        return;
    }
    else
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front++;
        }
}

void output() {
    int x = front;
    for (x; x <= rear; x++) {
        cout << ar[x] << " ";
    }
}

int main()
{
    cout << "\tArray Implementation of Queue\n";
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(99);
    enqueue(599);
    cout<<"elements ";
    output();
    dequeue();
    cout << "\nDeletion... ";
    output();
    return 0;

}
