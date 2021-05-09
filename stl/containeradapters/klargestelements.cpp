#include <bits/stdc++.h>
using namespace std;

void klargestelements(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+k);
    for(int i=k;i<n;i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

int main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	klargestelements(arr,n,k);
	return 0;
}