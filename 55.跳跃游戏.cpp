/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == 0){
                return false;
            }

        }
        return true;
    }
};
// @lc code=end

