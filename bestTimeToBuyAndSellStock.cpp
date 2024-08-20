#include <bits/stdc++.h>
using namespace std

int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int i=1;
        int mini=prices[0];
        int ans=0;
        int maxi=0;
        while(i<n){
            if(mini>prices[i]){
                 mini=prices[i];
            }
            ans=prices[i]-mini;
            maxi=max(ans,maxi);
            i++;
        }
        return maxi;
        
    }