/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 */
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid.size() ==0|| obstacleGrid[0].size() ==0){
            return 0;
        }
        if(obstacleGrid[0][0] == 1){
            return 0;
        }
        int n = obstacleGrid.size();
        int m =obstacleGrid[0].size();
        vector<vector<int>> dp;
        for(int i=0;i<obstacleGrid.size();i++){
            if(obstacleGrid[i][0] == 1){
                dp[i][0] =0;
            }else{
                dp[i][0] =1; 
            }
        }
           for(int i=0;i<obstacleGrid[0].size();i++){
            if(obstacleGrid[0][i] == 1){
                dp[0][i] =0;
            }else{
                dp[0][i] =1; 
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j< m;j++){
                if(obstacleGrid[i][j] == 1){
                    dp[i][j] =0;
                }else {
                     dp[i][j] = dp[i][j-1]+dp[i-1][j] +1;
                }
               

            }
        }
        return dp[n-1][m-1];
    }
};
// @lc code=end

