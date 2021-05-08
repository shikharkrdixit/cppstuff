#include <bits/stdc++.h>
using namespace std;

int main() {
	queue<int> qu;
	qu.push(10);
	qu.push(20);
	qu.push(30);
	qu.push(40);
	cout<<qu.size()<<"   "; //size = 4
	while(qu.empty()!=true){
	    cout<<qu.front()<<" ";
	    qu.pop();
	}
	//10 20 30 40
	cout<<"     "<<qu.size();
	//0
	return 0;
}