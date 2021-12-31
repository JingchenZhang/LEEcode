/*
 * @lc app=leetcode.cn id=1518 lang=cpp
 *
 * [1518] 换酒问题
 */

// @lc code=start
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int shengyu =numBottles;
        int count =0;
        int kong=0;
        while(shengyu >0){
            count += shengyu;
            kong+= shengyu%numExchange;
            shengyu = shengyu/numExchange+kong/numExchange;
           
        }
        return count;
    }
};
// @lc code=end

