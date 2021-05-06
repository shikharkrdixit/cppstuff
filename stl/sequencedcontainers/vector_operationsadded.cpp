#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
	vector<int> vec;
	for(int i=0;i<n;i++){
	    int t;
	    cin>>t;
	    vec.push_back(t); //pushing elements to back of vector
	}
	for(int i:vec){
	    cout<<i<<" ";
	}
	//sorting vectors
	sort(vec.begin(),vec.end());
	vec.front()=25; //changing value for the front element
	cout<<"front element :"<<vec.front()<<" back element :"<<vec.back()<<" ";
	//insert command
	vec.insert(vec.begin()+2,100);//100 at the begining+2 index
	vec.insert(vec.begin(),2,300);//300 twice at the begining
	
	vector<int> vec1;
	vec1.insert(vec1.begin(),vec.begin(),vec.begin()+3); // copying elements from one vector to another
	for(int i:vec1){
	    cout<<i<<" ";
	}
	vec1.pop_back(); //deleting last element
	for(int i:vec1){
	    cout<<i<<" ";
	}
	vec.erase(vec.begin()); // first element erased
	for(int i:vec){
	    cout<<i<<" ";
	}
	cout<<"arr2 ";
	vec1.resize(5,100); //5 is new size and 100 is initial value for it if not 100 then 0 uis default initialized
	for(int &i:vec1){
	    cout<<i<<" ";
	}
	//reverse printing the array
	cout<<" rev ";
	for(auto it=vec.rbegin();it!=vec.rend();it++){
	    cout<<(*it)<<" ";
	}
	//reversing the whole vector
	reverse(vec.begin(),vec.end());
	for(auto it=vec.rbegin();it!=vec.rend();it++){
	    cout<<(*it)<<" ";
	}
	//finally deleting all elements from vector
	vec.clear(); //clearing the vector vec
	vec1.clear(); //clearing the vector vec1
	if(vec.empty() and vec1.empty()){
	    cout<<"process completed!";
	}
	else{
	    cout<<"incomplete"; // checking if both vectors are empty with empty() command
	}
	return 0;
}