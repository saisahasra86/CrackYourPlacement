#include <bits/stdc++.h>
using namespace std

 int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target) return mid;
            else if(target<nums[mid])
            {
                if(nums[mid]>=nums[start]){
                    if(target>=nums[start]) end=mid-1;
                    else start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            else {
                 if(nums[mid]<=nums[end]){
                    if(target<=nums[end]) start=mid+1;
                    else end=mid-1;
                }
                else{
                    start=mid+1;
                }

            }
        }
        return -1;
    }