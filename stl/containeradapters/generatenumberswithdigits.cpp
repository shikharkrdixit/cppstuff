#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
	int n;
	cin>>a>>b>>n; //5 6 10
	queue<string> qu;
	qu.push(a);
	qu.push(b);
	for(int i=0;i<n;i++){
	    string st = qu.front();
	    cout<<st<<" ";
	    qu.pop();
	    qu.push(st+a);
	    qu.push(st+b);
	}
	//op = 5 6 55 56 65 66 555 556 565 566
	return 0;
}