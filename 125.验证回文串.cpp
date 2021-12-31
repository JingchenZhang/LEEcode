/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;  // 
// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        
        string d;
        foreach(char a:s.c_str()){
            if(a<49||(a>57&&a<65)||(a>90&&a<97)||a>122){

            }else{
                d+=a;
            }
        }
        int left = 0;
        int right=s.size()-1;
        while(left != right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
// @lc code=end

