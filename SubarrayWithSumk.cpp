#include <bits/stdc++.h>
using namespace std

int subarraySum(vector<int>& nums, int k) {
        // subarray with sum k
        // presum-
        map<int,int>mp;
        int n=nums.size();
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k) count++;
            if(mp.find(sum-k)!=mp.end()) {
                count+=mp[sum-k];
            }
            if(mp.find(sum)==mp.end()) mp[sum]=1;
            else mp[sum]++;
        }
        return count;
    }