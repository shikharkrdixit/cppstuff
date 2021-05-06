#include <bits/stdc++.h>
using namespace std;

/*for(auto i=ob.begin();i!=ob.end();i++){
	    cout<<(*i)<<" ";
	}*/

int main() {
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(40);
    l.push_front(4);
    l.push_front(2);
    l.push_front(1);
    l.push_front(56);
    
    //l = 56 1 2 4 10 20 40
    l.pop_front(); //element deleted from front = 56
    l.pop_back(); //element deleted from back = 40
    //l = 1 2 4 10 20
    
    list<int> l2={10,20,30,40,45};
    //l2 = 10 20 30 40 45
    auto it = l2.begin();
    it++;
    it=l2.insert(it,15);
    //l2 = 10 15 20 30 40 45
    it=l2.insert(it,2,11);
    //l2 = 10 11 11 15 20 30 40 45
    it++;
    it++;
    
    it=l2.erase(it);
    //l2 = 10 11 11 20 30 40 45
    l2.remove(11);
    //l2 = 10 20 30 40 45
    
    //merge two sorted lists
    l2.merge(l); //then l2 = 1 2 4 10 10 20 20 30 40 45
    l.merge(l2); //then l = 1 2 4 10 10 20 20 30 40 45
    
    /*though we cannot use both these statements together because as soon as we use
    l2.merge(l); then l becomes empty and l2 is filled with values and vice versa*/
    list<int> l3={10,10,2,3,4,2323,2,3,4};
    l3.unique(); //removes duplicate values
    l3.sort(); // sorts the list from smaller -> greater
    for(auto it=l3.begin();it!=l3.end();it++){
        cout<<(*it)<<" ";
    }
	return 0;
}