// deletefrom-nposition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node* link;
};

node* head = NULL;

void deletefrom(int n) {
	node* temp = head;
	if (n == 1) {
		head = temp->link;
		delete(temp);
		return;
	}
	for (int i = 0; i < n - 2; i++) {
		temp = temp->link;
	}
	node* temp2 = temp->link;
	temp->link = temp2->link;
	free(temp2);
}

void inpatend(int n) {
	node* temp = new node();
	temp->data = n;
	temp->link = NULL;
	if (head == NULL) {
		head = temp;
		return;
	}
	node* temp2 = head;
	while (temp2->link != NULL) {
		temp2 = temp2->link;
	}
	temp2->link = temp;
}

void output() {
	node* temp = head;
	while (temp!=NULL) {
		cout << temp->data << " ";
		temp = temp->link;
	}
}

int main() {
	cout << "\tDeletion from nth Position\n";
	inpatend(10);
	inpatend(18);
	inpatend(15);
	inpatend(19);
	inpatend(95);
	inpatend(99);
	cout << "Before Deletion ";
	output();
	deletefrom(1);
	cout << "\nAfter Deletion ";
	output();
	return 0;
}