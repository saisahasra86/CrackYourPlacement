#include <bits/stdc++.h>
using namespace std

 int strStr(string haystack, string needle) {
        string ans ="";
        int n = haystack.size();
        for(int i=0;i<n;i++){
            string s="";
            s+=haystack[i];
            for(int j=i+1;j<n;j++){
                  if(s.size()<needle.size()) s+=(haystack[j]);
                  else break;
            }
            if(s==needle) return i;
        }
       return -1;
    }