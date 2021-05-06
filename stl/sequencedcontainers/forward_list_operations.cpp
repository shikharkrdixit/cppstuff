#include <bits/stdc++.h>
using namespace std;

/*for(auto i=ob.begin();i!=ob.end();i++){
	    cout<<(*i)<<" ";
	}*/

int main() {
	forward_list<int> fl;
	fl.push_front(10);
	fl.push_front(20);
	fl.push_front(30);
	fl.push_front(25);
	fl.push_front(15);
	fl.push_front(18);
	fl.push_front(25);
	//fl = 25 18 15 25 30 20 10 
	
	fl.remove(25);
	//fl = 18 15 30 20 10 notice how both values = 25 are removed
	
	forward_list<int> fl2;
	fl2.assign({10,20,30});
	//fl2 = 10 20 30
	
	//assigning one forward list to another
	forward_list<int> fl3;
	fl3.assign(fl2.begin(),fl2.end());
	
	//initializing an forward_list with default values
	forward_list<int> fl4;
	fl4.assign(3,10);
	//fl4 = 10 10 10
	
	//insert after in, fl3 = 10 20 30
	auto it=fl3.insert_after(fl3.begin(),11);
	//fl3 = 10 11 20 30     it has the memory of the last accessed element
	it = fl3.insert_after(it,{2,3,5});
	//fl3 = 10 11 2 3 5 20 30
	it = fl3.emplace_after(it,40);
	//fl3 = 10 11 2 3 5 40 20 30      emplace_after is just an optimized version of insert_after
	it = fl3.erase_after(it);
	//the immediate element next to it is removed
	it = fl3.erase_after(it,fl3.end());
	//from position it to fl3.end() elements are removed
    for(auto i=fl3.begin();i!=fl3.end();i++){
	    cout<<(*i)<<" ";
	}
	cout<<" after merging :";
	//merging two forward_list
	//fl4 = 10 10 10 and fl3= 10 11 2 3 5 40 30 
	fl3.merge(fl4);
	//but after merging fl4 becomes empty and fl3= 10 10 10 10 11 2 3 5 40 30 
	
	return 0;
}