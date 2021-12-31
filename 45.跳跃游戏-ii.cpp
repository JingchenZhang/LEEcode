/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int max1=0,end =0;
        int step =0;
        for(int i=0;i<nums.lenght();i++){
            if(max1 >=i){
                max1 = max(max1,i+nums[i]);
                if(i ==end){
                    end =max1;
                    step ++;
                }
            }
        }
        return step;
    }
};
// @lc code=end

