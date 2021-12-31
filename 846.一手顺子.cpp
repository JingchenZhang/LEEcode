/*
 * @lc app=leetcode.cn id=846 lang=cpp
 *
 * [846] 一手顺子
 */

// @lc code=start
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
     if(hand.size()%groupSize!=0){
            return false;
        }
        sort(hand.begin(),hand.end());
        vector<int> a(10110);
        for(vector<int>::iterator it;it!=hand.end();it++){
            a[(*it)]++;
        }
        int count =0;
        for(int i=0;i<hand.size();i++){
            if(a[hand[i]]>0&&a[hand[i]+1]>0&&a[hand[i]+2]>0&&a[hand[i]+3]>0){
                count++;
                a[hand[i]]--;
                a[hand[i]+1]--;
                a[hand[i]+2]--;
                a[hand[i]+3]--;
            }
        }
        if(count == groupSize && count*groupSize == hand.size()){
            return true;
        }
        return false;
    }
};
// @lc code=end

