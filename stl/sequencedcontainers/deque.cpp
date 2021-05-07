#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq={10,20,35,40};
    dq.push_back(50);
    dq.push_front(5);
    //dq = 5 10 20 35 40 50
    auto it=dq.begin();
    it++;
    dq.insert(it,20);
    //dq = 5 20 10 20 35 40 50
    dq.pop_front();
    dq.pop_back();
    //dq = 20 10 20 35 40
	return 0;
}