// heightofbt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

struct bstnode {
    int data;
    bstnode* left;
    bstnode* right;
};

bstnode* createnode(int x) {
    bstnode* temp = new bstnode();
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

bstnode* insertval (bstnode* root, int x) {
    if (root == NULL) {
        root = createnode(x);
        return root;
    }else
    if (x <= root->data) {
        root->left = insertval(root->left,x);
        return root;
    }else
        if (x > root->data) {
            root->right = insertval(root->right, x);
            return root;
    }
}

int FindHeight(bstnode* root) {
    if (root == NULL)return -1;

    return max(FindHeight(root->left), FindHeight(root->right))+1;
}


int main()
{
    bstnode* root = NULL;
    root = insertval(root, 50);
    root = insertval(root, 20);
    root = insertval(root, 30);
    root = insertval(root, 70);
    root = insertval(root, 90);
    root = insertval(root, 10);
    root = insertval(root, 80);
    cout << "Height of Binary Tree ";
    cout << FindHeight(root);
    return 0;
}

