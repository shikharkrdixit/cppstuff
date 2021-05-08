#include <bits/stdc++.h>
using namespace std;

int main() {
	stack<int> st;
	st.push(10);
	st.push(11);
	st.push(1);
	st.push(99);
	//st = 99 1 11 10
	
	cout<<st.size()<<" "; //op = 4
	
	st.pop();
	//st = 1 11 10
	
	cout<<st.size()<<" "; //op = 3
	return 0;
}