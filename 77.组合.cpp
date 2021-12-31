/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
class Solution {
public:
vector<vector<int>> d;
vector<int> f;
    vector<vector<int>> combine(int n, int k) {

        a(n,k,0);
        return d;
    }
    void a(int n,int k,int index){
        if(k == 0){
            d.emplace_back(f);
            return ;
        }
        for(int i=index; i<n;i++){
                f.emplace_back(i);
                a(n,k-1,i+1);
                f.pop_back();
        }

    }
};
// @lc code=end

