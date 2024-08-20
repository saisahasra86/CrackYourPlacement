#include <bits/stdc++.h>
using namespace std

  vector<int> twoSum(vector<int>& nums, int target) {
        // indices
        //  we can do with map
        // hashing
        map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (mp.find(target - nums[i]) == mp.end()) {
                mp[nums[i]] = i;
                // cout<<nums[i]<<mp[nums[i]]<<endl;
            } else {
                // cout<<i<<endl;
                // cout<<mp[nums[i]]<<endl;
                return {i, mp[target-nums[i]]};
            }
        }
        return {-1,-1};
    }