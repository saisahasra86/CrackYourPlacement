#include <bits/stdc++.h>
using namespace std

  int findDuplicate(vector<int>& nums) {
       //binary search 
       int n=nums.size();
       int start=1;
       int end=n;
       
       while(start<end){
            int mid=start+(end-start)/2;
            int count=0;
            // cout<<mid<<endl;
            for(int i=0;i<n;i++){
                if(nums[i]<=mid){
                    count++;
                }
                // cout<<count<<endl;
            }
            if(count>mid) end=mid;
            else start=mid+1;
            // cout<<mid<<endl;
       }
       return start;
    }