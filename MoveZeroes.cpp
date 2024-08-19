#include <bits/stdc++.h>
using namespace std

 void moveZeroes(vector<int>& nums) {
        //inplace
        //pointer approach 
        // the first should be at the start 
        // second pointer should be at the point where you see the first zero appears
               int i=0;
        // int j=1;
        int x;
        int n=nums.size();
        while(i<n){
            if(nums[i]==0) 
            {   x=i;
                break;
            }
            i++;
        }
        int  j=i+1;
        while(j<n){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else{
                j++;
            }
        }

    }