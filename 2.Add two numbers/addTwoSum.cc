/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *listOfSum = 0;
        ListNode *tail = 0;
        int carry = 0;

        while (l1 || l2 || carry)
        {
            int a = 0;
            int b = 0;
            if (!l1)
            {
                a = 0;
            }
            else 
            {
                a = l1->val;
                l1 = l1->next;
            }
            if(!l2)
            {
                b=0;
            }
            else
            {
                b = l2->val;
                l2 = l2->next;
            }

            int s = (a + b + carry);
            carry = s / 10;
            int r = s % 10;
            if (tail == 0) {
               tail = new ListNode(r);
               listOfSum = tail; 
            }
            else
            {
               tail->next = new ListNode(r);
               tail = tail->next;
            }
              
           
        }


        return listOfSum;
    }
};

