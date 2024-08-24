#include <bits/stdc++.h>
using namespace std

  vector<int> findDuplicates(vector<int>& nums) {
        //[1,n]
        // I know the approach i.e is of tc-o(nlogn)+o(n)
        // but we need a o(n)
        // map will use o(n) space 
        // this tells you the the size of both vector nums and map(worst case)
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x=abs(nums[i]);
            if(nums[x-1]<0)  ans.push_back(x);
            nums[x-1]=-1*(nums[x-1]);
        }
        return ans;    
    }