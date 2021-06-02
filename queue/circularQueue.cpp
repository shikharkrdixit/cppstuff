// P11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#define mxsz 100
int arr[mxsz];
int front = -1, rear = -1;
int N;
bool isEmpty() {
    return (rear == -1 and front == -1);
}
bool isFull() {
    return ((rear+1)%mxsz == front);
}
void enqueue(int x) {
    if (isEmpty()) {
        front++;
        rear++;
    }
    if (isFull()) {
        cout << "Overflow";
        return;
    }
    else {
        rear = (rear + 1) % 10;
    }
    arr[rear] = x;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Underflow";
        return;
    }
    else if (front == rear) {
            front = rear = -1;
        }
    else {
        front = (front + 1) % mxsz;
    }
}

void output() {
    int n= (rear + mxsz - front) % mxsz + 1;
    for (int x=0; x < n; x++) {
        int m = (front + x) % mxsz;
        cout << arr[m]<<" ";
    }
}

int main()
{
    cout << "\tCircular Queue\n";
    cin >> N;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        enqueue(x);
    }
    dequeue();
    cout << "\n";
    output();
    return 0;
}