/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a =nums[0];
        int count =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == a){
                count++;
            }else{
                count--;
                if(count == 0){
                    a = nums[i];
                    count++;
                }
            }

        }
        return a;
    }
};
// @lc code=end

