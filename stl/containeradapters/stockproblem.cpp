#include <bits/stdc++.h>
using namespace std;

void checklist(int arr[],int n){
    stack<int> st;
    st.push(0);
    cout<<1<<" ";
    for(int i=1;i<n;i++){
        while(st.empty()==false and arr[st.top()]<=arr[i])
        st.pop();
        int span = (st.empty())?(i+1):(i-st.top());
        st.push(i);
        cout<<span<<" ";
    }
}

int main() {
	int n;
	int arr[20];
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	checklist(arr,n);
	return 0;
}