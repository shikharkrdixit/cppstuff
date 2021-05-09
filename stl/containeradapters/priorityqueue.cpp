#include <bits/stdc++.h>
using namespace std;


void min_heap(){
    priority_queue<int,vector<int>,greater<int>> pq;
	pq.push(10);
	pq.push(20);
	pq.push(15);
	while(pq.empty()==false){
	    cout<<pq.top()<<" "<<pq.size()<<"   ";
	    pq.pop();
	}
	//OP : 10 3   15 2   20 1
}



void max_heap(){
    priority_queue<int> pq1;
	pq1.push(10);
	pq1.push(15);
	pq1.push(30);
	while(pq1.empty()==false){
	    cout<<pq1.top()<<" "<<pq1.size()<<"   ";
	    pq1.pop();
	}
	//OP : 30 3   15 2   10 1
}

int main() {
    cout<<"min heap  ";
    min_heap();
    cout<<"max heap  ";
    max_heap();
    int arr[5]={5,10,20,15};
    //initializing with pre defined array
    priority_queue<int> pq(arr,arr+4);
    cout<<"priority_queue is default max_heap ";
    while(pq.empty()==false){
        cout<<pq.top()<<" "<<pq.size()<<"   ";
        pq.pop();
    }
    //OP : 20 4   15 3   10 2   5 1
    //min heap for pre defined second way
    for(int i=0;i<4;i++){
        arr[i]=-arr[i];
    }
    cout<<"min_heap  ";
	priority_queue<int> pq1(arr,arr+4);
	while(pq.empty()==false){
	    cout<<pq.top()<<" "<<pq.size()<<"   ";
	    pq.pop();
	}
	//OP : 5 4   10 3   15 2   20 1
	return 0;
}