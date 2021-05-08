#include <bits/stdc++.h>
using namespace std;

void checkandoutput(int arr[],int n){
    stack<int> st;
    st.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++){
        while(st.empty()==false and st.top()<=arr[i])
        st.pop();
        
        int element = (st.empty()?-1:(st.top()));
        cout<<element<<" ";
        st.push(arr[i]);
    }
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	checkandoutput(arr,n);
	return 0;
}