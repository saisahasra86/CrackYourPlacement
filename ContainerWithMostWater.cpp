#include <bits/stdc++.h>
using namespace std

   int maxArea(vector<int>& height) {
        // two pointer method
        int i=0;
        int n=height.size();
        int j=n-1;
        // maximize width (pointers, first and last)
        int maxi=0;
        while(i<j){
            int area=(j-i)*(min(height[i],height[j]));
            maxi=max(area,maxi);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return maxi;
    }