#include <bits/stdc++.h>
using namespace std

  void rotate(vector<vector<int>>& matrix) {
        // rotate the image by 90 degrees
        // inplace
        // clockwise
        // do (rows->col)
        // then (col->row)
        int n = matrix.size();
        int m = matrix[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (i != j) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
         for (int i = 0; i < n; i++) {
            int j= 0;
            int k= m - 1;
            while (j < k) {
                swap(matrix[i][j], matrix[i][k]);
                j++;
                k--;
            }
        }
    }
