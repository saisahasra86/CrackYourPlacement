
#include <bits/stdc++.h>
using namespace std

    void
    setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    if (n == 0)
        return;
    int m = matrix[0].size();
    set<int> set1;
    set<int> set2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                set1.insert(i);
                set2.insert(j);
            }
        }
    }
    // Traverse the set and print each element using an iterator with auto
    for (auto x : set1)
    {
        for (int i = 0; i < m; i++)
        {
            matrix[x][i] = 0;
        }
    }

    for (auto x : set2)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[i][x] = 0;
        }
    }
    // for (auto it:set1.begin(); it != set1.end(); ++it) {
    //         //   int x= *it;
    //           for(int i=0;i<m;i++){
    //             matrix[x][i]=0;
    //           }
    // }

    // for (auto it = set2.begin(); it != set2.end(); ++it) {
    //              int y= *it;
    //           for(int i=0;i<n;i++){
    //             matrix[i][y]=0;
    //           }
    // }
}