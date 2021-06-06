// bstSearching.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <bits/stdc++.h>
using namespace std;

struct BSTNode {
    int data;
    BSTNode* left;
    BSTNode* right;
};

BSTNode* createnode(int x) {
    BSTNode* temp = new BSTNode();
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

BSTNode* insertval(BSTNode* root,int x) {
    if (root == NULL) {
        root = createnode(x);
        return root;
    }else 
        if (x <= root->data) {
        root->left = insertval(root->left, x);
    }else
         if (x > root->data) {
                root->right = insertval(root->right, x);
         }
    return root;

}

bool SearchNode(BSTNode* root, int key) {
    if (root == NULL)return false;
    else
        if (root->data == key)return true;
    else
        if (key <= root->data) {
            SearchNode(root->left, key);
        }
    else
        if (key > root->data) {
                SearchNode(root->right, key);
            }
}

int main()
{
    BSTNode* root = NULL;
    root = insertval(root, 50);
    root = insertval(root, 20);
    root = insertval(root, 30);
    root = insertval(root, 70);
    root = insertval(root, 90);
    root = insertval(root, 10);
    root = insertval(root, 80);
    int key;
    cout << "Please Enter Number to be Searched";
    cin >> key;
    if (SearchNode(root, key))cout << "\nFound Element\t" << key;
    else cout << "\nNot Found!!!";
    return 0;
}

