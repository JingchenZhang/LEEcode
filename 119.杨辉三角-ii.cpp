/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector <int>a;
          if(rowIndex <0){
            return a;
        }
        int count=0;
        int first =0,last =0;
        vector<vector<int>> c;
        
        for(int i=0;i<=rowIndex;i++){
            last =i;
            vector<int> d;
            for(int j=0;j<i+1;j++){
                if(j ==0||j==last){
                   d.emplace_back(1); 
                }else{
                    d.emplace_back(c[i-1][j-1]+c[i-1][j]);
                }
                
            }
            c.emplace_back(d);
        }
    return c[rowIndex];
    }
};
// @lc code=end

