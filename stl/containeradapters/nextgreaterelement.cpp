#include <bits/stdc++.h>
using namespace std;

void nextgreater(int arr[10],int n){
    stack<int> st;
    vector<int> vec;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.empty()==false and st.top()<arr[i])
        st.pop();
        int element = (st.empty()?(-1):st.top());
        vec.push_back(element);
        st.push(arr[i]);
    }
    reverse(vec.begin(),vec.end());
    for(int i:vec){
	    cout<<i<<" ";
	}
	cout<<-1;
    //return vec;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	nextgreater(arr,n);
	
	return 0;
}