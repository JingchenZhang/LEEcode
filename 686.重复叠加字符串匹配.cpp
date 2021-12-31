/*
 * @lc app=leetcode.cn id=686 lang=cpp
 *
 * [686] 重复叠加字符串匹配
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
// @lc code=start
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string d="";
        int cont =0;
       while (d.length()<b.length()&++cont>0)
       {
           d+=a;
       }
      if(d==b||d.find(b)!=string::npos)
            return cont;
        else{
            d+=a;
            if(d.find(b)!=string::npos)
                return cont+1;
            else
                return -1;
        }
       
    }
};
// @lc code=end

