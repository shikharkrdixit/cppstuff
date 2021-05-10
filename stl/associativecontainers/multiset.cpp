#include <bits/stdc++.h>
using namespace std;

int main() {
	multiset<int> ms;
	ms.insert(10);
	ms.insert(40);
	ms.insert(10);
	ms.insert(20);
	ms.insert(20);
	ms.insert(30);
	for(auto it:ms){
	    cout<<it<<" ";
	}
	//OP : 10 10 20 20 30 40
	ms.erase(10);
	cout<<"aftererasing : ";
	for(auto it:ms){
	    cout<<it<<" ";
	}
	//OP : 20 20 30 40
	cout<<ms.count(20);
	//OP : 2
	auto it=ms.equal_range(20);
	cout<<"lower bound for 20 : "<<*it.first<<" upper bound for 20 : "<<*it.second;
	//OP : lower bound for 20 : 20 upper bound for 20 : 30
	return 0;
}