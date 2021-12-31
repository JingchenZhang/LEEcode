/*
 * @lc app=leetcode.cn id=1705 lang=cpp
 *
 * [1705] 吃苹果的最大数目
 */

// @lc code=start
class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        int maxcount=0;
        for(int i=0;i<apples.size();i++){
            //当前苹果可以吃几天
            int cont = apples[i]>days[i]?days[i]:apples[i];
            if(maxcount - 1>i && i+cont > maxcount)
            maxcount = i+cont;
            else if(maxcount<= i)
            maxcount = maxcount +cont;

        }
        return maxcount;
    }
};
// @lc code=end

