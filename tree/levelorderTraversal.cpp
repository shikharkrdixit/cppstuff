// levelorderTraversal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

struct levelorder{
    int data;
    levelorder* left;
    levelorder* right;
};

levelorder* createnode(int x) {
    levelorder* temp = new levelorder();
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

levelorder* insertnode(levelorder* root, int x) {
    if (root == NULL) {
        root = createnode(x);
        //return root;
    }else
    if (x <= root->data) {
        root->left = insertnode(root->left, x);
    }else
    if (x > root->data) {
        root->right = insertnode(root->right, x);
    }
    return root;
}

void levelordertraversal(levelorder* root) {
    if (root == NULL)return;

    queue<levelorder*> que;
    que.push(root);
    while (que.empty() != true) {
        levelorder* temp = que.front();
        cout << temp->data << "|";
        if (temp->left != NULL)que.push(temp->left);
        if (temp->right != NULL)que.push(temp->right);
        que.pop();
    }
}


int main()
{
    levelorder* root = NULL;
    root = insertnode(root, 50);
    root = insertnode(root, 20);
    root = insertnode(root, 30);
    root = insertnode(root, 70);
    root = insertnode(root, 90);
    root = insertnode(root, 10);
    root = insertnode(root, 80);
    cout << "\t Level Order Traversal\n";
    levelordertraversal(root);
    return 0;
}
