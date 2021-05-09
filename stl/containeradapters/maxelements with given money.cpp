#include <bits/stdc++.h>
using namespace std;

int maxthingsbought(int arr[],int n,int rs){
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+n);
    int sum=rs,res=0;
    while(sum>=0 and pq.empty()==false and pq.top()<=sum){
        sum-=pq.top();
        pq.pop();
        res++;
    }
    return res;
}

int main() {
	int n,rs;
	cin>>n>>rs;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int res = maxthingsbought(arr,n,rs);
	cout<<res;
	return 0;
}