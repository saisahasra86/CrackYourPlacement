#include <bits/stdc++.h>
using namespace std

    int subarraysDivByK(vector<int>& nums, int k) {
        //6,8,10,16,25,18,12,24
        //k=12
        //6,8,10,4,1,6,0,0
        //6,14,24,28,29,35,35,35
        //6,2,0,4,5,11,11,11


        int n = nums.size();
        int count=0;
        int sum=0;
        map<int,int>prefsum;
        for(int i=0;i<n;i++){
            sum+=(nums[i]);
            // sum%=k;
            int r=sum%k;
            if(r<0) r+=k;
            if(sum%k==0) count++;
            if(prefsum.find(r)!=prefsum.end()){
                count+=(prefsum[r]);
            }
            prefsum[r]++;
        }
        return count;
    }