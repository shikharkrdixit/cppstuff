#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	vector<int> ve(vec.size());
	cout << "\n";
	partial_sum(vec.begin(), vec.end(),ve.begin());
	for (auto it : ve) {
		cout << it << " ";
	}
}

for an array [0,3,5,6]
partial sum gives:
[0,3,8,14]