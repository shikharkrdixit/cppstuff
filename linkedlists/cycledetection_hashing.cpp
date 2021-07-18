#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

struct Node
{
    int val;
    struct Node* next;
};

bool detectLoop(struct Node* ptr)
{
    unordered_map<Node*, bool> cycdet;

    Node* temp = ptr;
    while (temp != NULL) {
        if (cycdet[temp] != false)
            return true;
        cycdet[temp] = true;
    }
    return false;
}
int main()
{
    struct Node* head = new Node;
    head->val = 2;
    struct Node* l1 = new Node;
    l1->val = 8;
    head->next = l1;
    struct Node* l2 = new Node;
    l2->val = 3;
    l1->next = l2;
    struct Node* l3 = new Node;
    l3->val = 5;
    l2->next = l3;
    struct Node* l4 = new Node;
    l4->val = 10;
    l3->next = l4;
    l4->next = l2;

    // 2->8->3->5->10--
    //       ^        |
    //       |        |
    //       |_ _ __ _|
    if (detectLoop(head))
        cout << "Loop Present\n";
    else
        cout << "No Loops\n";
    return 0;
}