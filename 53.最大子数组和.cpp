/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

// @lc code=start
class Solution {
public:
 
    int maxSubArray(vector<int>& nums) {
        
        int n =nums.size();
        if(n== 0){
            return 0;
        }
        int max1=nums[0];
        int count =0;
        for(int i=0;i<n;i++){
             count = max(count + nums[i], nums[i]);
            max1 = max(max1, count);
        }
    }
   
};
// @lc code=end

