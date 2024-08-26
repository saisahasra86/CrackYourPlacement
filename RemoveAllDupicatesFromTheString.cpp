#include <bits/stdc++.h>
using namespace std

	string removeDuplicates(string str) {
	    // code here
	    string s;
	    set<char>st;
	    for(int i=0;i<str.size();i++){
	        if(st.find(str[i])==st.end()){
	            s+=str[i];
	        }
	        st.insert(str[i]);
	    }
	    return s;
	}