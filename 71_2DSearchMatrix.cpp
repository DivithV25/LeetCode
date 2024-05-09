#include<iostream>
#include<bits/stdc++.h>
using namespace std;                                

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int r=matrix.size();       
         int c=matrix[0].size();    
            
        for (int i=0; i <= r-1; i++) {
            if(matrix[i][0]<=target && matrix[i][c-1]>=target )
            for (int j = 0; j <= c-1; j++) {
                if (matrix[i][j] == target) {
                    return true;
                }
            }
        }
    return false;
    }
};