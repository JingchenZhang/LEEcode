/*
 * @lc app=leetcode.cn id=1154 lang=cpp
 *
 * [1154] 一年中的第几天
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// @lc code=start
class Solution {
public:
    int dayOfYear(string date) {
        int year = atol((char *)date.copy((char *)date.c_str(),4));
        int month = (date[5] -'0')*10+date[6] -'0';
        int day =  (date[8] -'0')*10+date[9] -'0';
        int twomonth =0;
        if(year%4==0 && year%100!=0 || year %400 ==0){
            twomonth = 29;
        }else{
            twomonth = 28;
        }
        int day1 =0;
        switch (month)
        {
                case 1:
                day1 += 31;
                case 2:
                day1 += twomonth;
                case 3:
                day1 += 31;
                case 4:
                day1 += 30;
                case 5:
                day1 += 31;
                case 6:
                day1 += 30;
                case 7:
                day1 += 31;
                case 8:
                day1 += 31;
                case 9:
                day1 += 30;
                case 10:
                day1 += 31;
                case 11:
                day1 += 30;
                case 12:
                day1 += 31;
                break;
        default:
            break;
        }
        day1 +=day;
        return day1;
    }
};
// @lc code=end

