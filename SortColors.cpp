 
 #include<bits/stdc++.h>
 using namespace std
 
 void sortColors(vector<int>& nums) {
        int mid=0;
        int n=nums.size();
        int low=0;
        int high=n-1;
        // intuition behind low,mid,high
        // below low-1 all are 0's
        // low-mid-1 all are 1's
        // mid -high all are unsorted
        // high+1-n-1 all are 2's
        // our aim is to make mid-high sorted by moving the elements through indices
        // this can be done in o(n)
        // ans sc=o(1), as it is inplace techinque.
        while(mid<=high) {
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }