 #include<bits/stdc++.h>
 using namespace std

  int removeDuplicates(vector<int>& nums) {
        // inplace
        //  two pointer method
        //  the point is where will you put the pointers(key finding)
        //  i will be at strat of vector
        //  j should be at the point at which you found a different number from
        //  previous
        int n = nums.size();
        if(n==1) return 1;
        int i = 0;
        int j = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] != nums[i]) {
                j = i;
                break;
            }
        }
        // we got i,j
        // start two pointers
        int count=1;
        while (i < n && j < n) {
            if (nums[i] < nums[j]) {
                swap(nums[i + 1], nums[j]);
                count+=1;
                i++;
            }
            j++;

            // 1 1 2 2 3 3 4 4
        }
        return count;
    }