#include <bits/stdc++.h>
using namespace std

 string simplifyPath(string path) {
        // stack-0-n,stack-reverse words
        // /home/guard/tv
        // tv,guard,home
        // tv/guard/home
        // vt/draug/emoh
        stack<string> st;
        string ans = "";
        int n = path.size();
        for (int i = 0; i < n; i++) {
            if (path[i] == '/') {
                if (ans.empty()) {

                } else {
                    if (ans == ".." && !st.empty())
                        st.pop();
                    else if (ans != "." && ans!=".."){
                         reverse(ans.begin(),ans.end());
                         st.push(ans);
                        //  cout<<ans<<endl;
                    }   
                    ans = "";
                }
            } else
                ans += path[i];
        }
        // cout<<ans<<endl;
        if (ans == ".." || ans==".") {
            if(ans==".." && !st.empty()) st.pop();
            ans="";
        } else if (ans != ".") {
             reverse(ans.begin(),ans.end());
            st.push(ans);
        }
        ans = "";
        while (!st.empty()) {
            string s = st.top();
            ans += s;
            // reverse(ans.begin(), ans.end());
            ans += '/';
            st.pop();
        }
        string s="";
        for(int i=ans.size()-1;i>=0;i--){
            if(i==0 && ans[i]=='/') {
                continue;
            }
            s+=ans[i];
        }
        if(s.empty()) s+='/';
        // cout<<s<<endl;
        return s;
    }