/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minprice=1e9;
       int maxp =0;
       for(int i=0;i<prices.size();i++){
           if(minprice >prices[i]){
               minprice =prices[i];
           }else if(prices[i] -minprice >maxp){
               maxp =prices[i] -minprice;
           }
       }
    }
    
};
// @lc code=end

