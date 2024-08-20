#include <bits/stdc++.h>
using namespace std

  long long findMinDiff(vector<long long> a, long long n, long long m){
    long long x=INT_MAX;
    sort(a.begin(),a.end());
    long long diff=0;
    for(int i=0;i<n;i++){
        if((i+m-1)<n) diff=a[i+m-1]-a[i];
        if(x>diff) x=diff;
    }
    return x;
    }  