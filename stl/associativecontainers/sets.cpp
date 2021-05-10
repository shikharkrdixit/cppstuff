#include <bits/stdc++.h>
using namespace std;

int main() {
	set<int> st;
	st.insert(10);
	st.insert(20);
	st.insert(15);
	st.insert(10);
	st.insert(25);
	st.insert(20);
	st.insert(30);
	for(auto it:st){
	    cout<<it<<" ";
	}
	//OP : 10 15 20 25 30 - sets ignore duplicate values and they by-default arrange elements in increasing order.
	auto it=find(st.begin(),st.end(),15);
	if(it==st.end()){
	cout<<"Not Found!";}
	else{
	cout<<"Found the element ";}
	//OP : Found the element
	auto i = st.lower_bound(16);
	if(i!=st.end())cout<<(*i);
	else cout<<"Greater than the greatest";
	//OP : 20 - if the element is not there it prints the just next greatest element in the set.
	
	auto k = st.upper_bound(15);
	if(k!=st.end())cout<<(*k);
	else cout<<"Greater than the greatest";
	//OP : 20 - returns the next greater element.
	
	return 0;
}