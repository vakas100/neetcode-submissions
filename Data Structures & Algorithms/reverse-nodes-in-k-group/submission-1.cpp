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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* lasthead = nullptr;
        ListNode* lastNode = nullptr;
        ListNode* temp = curr;

        int count_remaining = 0;
        while(temp){
            count_remaining++;
            temp = temp->next;
        }
        
        int times = count_remaining/k;
        if(times == 0) return head;
        int left = count_remaining%k;
        int loop = 1;
        while(loop <= times){
            int count = 0;
            while(count!=k)
            {
                ListNode* tempcurr = curr->next;
                curr->next = prev;
                prev = curr;
                curr = tempcurr;
                count++;
            }
            if(loop == 1)
            {
                lasthead = prev;
                prev = nullptr;
            }
            else
            {
                head->next = prev;
                head = lastNode;
                prev = nullptr;
            }
            if(curr) lastNode = curr;
            loop++;
        }

        if(curr && count_remaining > k) {
            head->next = curr;
        }
        return lasthead;
    }
};
