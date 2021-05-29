// stackusingArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#define maxsize 101
int a[maxsize];
int top = -1;

void push(int x) {
    if (top == maxsize) {
        cout << "\nUnderflow\n";
        return;
    }
    a[++top] = x;
}

void pop() {
    if (top == -1) {
        cout << "\nUnderflow\n";
        return;
    }
    top--;
}

void peep() {
    for (int i = 0; i <= top; i++) {
        cout << a[i] << " ";;
    }
}

void isempty() {
    if (top == -1)cout << "\nEmpty\n";
}

int main()
{
    cout << "\tStack Implementation in Array\n";
    isempty();
    cout << "\tInserting Elements...\n";
    push(10);
    push(20);
    push(30);
    push(40);
    cout << "Entered Elements ";
    peep();
    cout << "\nPopping An Element... ";
    pop();
    cout << "\nAfter Popping ";
    peep();
    return 0;
}
