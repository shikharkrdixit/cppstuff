// BSTminmaxValue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

struct BSTNode {
    int data;
    BSTNode* left;
    BSTNode* right;
};

BSTNode* createNode(int x) {
    BSTNode* temp = new BSTNode();
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

BSTNode* insertValue(BSTNode* root, int x) {
    if (root == NULL) {
        root = createNode(x);
        return root;
    }
    else if (x <= root->data) {
        root->left = insertValue(root->left, x);
    }
    else if (x > root->data) {
        root->right = insertValue(root->right, x);
    }
    return root;
}

int MinValue(BSTNode* root) {
    if (root == NULL) {
        cout << "\nUnavailable\n";
        return -1;
    }
    else if (root->left == NULL) {
        return root->data;
    }
    else {
        MinValue(root->left);
    }
}

int MaxValue(BSTNode* root) {
    if (root == NULL) {
        cout << "\nUnavailable\n";
        return -1;
    }
    else if (root->right == NULL) {
        return root->data;
    }
    else {
        MaxValue(root->right);
    }
}

int main()
{
    cout << "\tMin-Max Values\n";
    BSTNode* root = NULL;
    root = insertValue(root, 50);
    root = insertValue(root, 40);
    root = insertValue(root, 30);
    root = insertValue(root, 35);
    root = insertValue(root, 60);
    root = insertValue(root, 55);
    root = insertValue(root, 100);
    root = insertValue(root, 62);
    cout << "\nMinimum Value\t" << MinValue(root);
    cout << "\nMaximum Value\t" << MaxValue(root);
    return 0;
}