 #include<bits/stdc++.h>
 using namespace std

string reverseWords(string s) {
        vector<string> v;
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                ans += s[i];
            } else {
                // if(i==0 || i==s.size()-1)   v.push_back(ans);
                if(ans!="") v.push_back(ans);
                ans = "";
            }
        }
        if (ans != "")
            v.push_back(ans);
        string ans1 = "";
        for (int i = v.size() - 1; i >= 0; i--) {
            ans1 += v[i];
            if (i != 0)
                ans1 += " ";
        }
        return ans1;
    }