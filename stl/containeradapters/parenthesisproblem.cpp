#include <bits/stdc++.h>
using namespace std;

bool openclose(char a,char b){
    return ((a=='(' and b==')') or (a=='[' and b==']') or (a=='{' and b=='}'));
}

bool check(string str){
    stack<int> st;
    for(int i=0;i<str.size();i++){
        if(str[i]=='(' or str[i]=='[' or str[i]=='{'){
            st.push(str[i]);
        }
        else
        {
            if(st.empty()==true){
                return false;
            }
            else
            if(openclose(st.top(),str[i])==false){
                return false;
            }
            else st.pop();
        }
    }
    return (st.empty()==true);
}

int main() {
	string str;
	cin>>str;
	cout<<check(str);
	return 0;
}