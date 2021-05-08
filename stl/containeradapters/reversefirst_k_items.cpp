#include <bits/stdc++.h>
using namespace std;

int main() {
	deque<int> dq;
	deque<int> dq1;
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
	    int t;
	    cin>>t;
	    dq.push_back(t);
	    //dq1.push_front(t);
	}
	for(int i=0;i<k;i++){
	    int t=dq.front();
	    dq1.push_back(t);
	    dq.pop_front();
	}
	for(int i=0;i<k;i++){
	    int t = dq1.front();
	    dq.push_front(t);
	    dq1.pop_front();
	}
	while(dq.empty()==false){
	    cout<<dq.front()<<" ";
	    dq.pop_front();
	}
	return 0;
}