#include <bits/stdc++.h>
using namespace std;

int josephus(int n,int k){
    list<int> ls;
    for(int i=0;i<n;i++){
        ls.push_back(i);
    }
    auto it=ls.begin();
    while(ls.size()>1){
        for(int cnt=1;cnt<k;cnt++){
            it++;
            if(it==ls.end()){
                it=ls.begin();
            }
        }
        it=ls.erase(it);
        if(it==ls.end()){
            it=ls.begin();
        }
    
    }
    return *it;
}

int main() {
	int n,k;
	cin>>n>>k;
	cout<<josephus(n,k);
	return 0;
}