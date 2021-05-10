#include <bits/stdc++.h>
using namespace std;

void ceilingright(int arr[],int n){
    set<int> st;
    int res[n];
    for(int i=0;i<n;i++){
        auto it=st.lower_bound(arr[i]);
        if(it==st.end())
        res[i]=-1;
        else
        res[i]=*it;
        st.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	ceilingright(arr,n);
	return 0;
}