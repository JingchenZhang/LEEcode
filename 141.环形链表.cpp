/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
 */

// @lc code=start

//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        ListNode* kuai=head;
        ListNode* slowly =head->next;
        while(kuai!=nullptr&&slowly!=nullptr){
            if(kuai == slowly){
                return true;
            }
            kuai=kuai->next->next;
            slowly =slowly->next;
        }
        return false;
    }
};
// @lc code=end

