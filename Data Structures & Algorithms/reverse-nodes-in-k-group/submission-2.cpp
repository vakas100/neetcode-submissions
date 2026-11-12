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
        ListNode* tempNode = nullptr;
        ListNode* permHead = nullptr;
        ListNode* temp = head;

        int count_remaining = 0;
        while(temp){
            count_remaining++;
            temp = temp->next;
        }

        int times = count_remaining / k;
        if(times == 0) return head;

        int loop = 0;
        while(loop != times){
            int count = 0;
            while(count < k) {
                ListNode* tempcurr = curr->next;
                curr->next = prev;
                prev = curr;
                curr = tempcurr;
                count++;
            }
            if(loop == 0) {
                permHead = prev;
                prev = nullptr;
            }
            else{
                head->next = prev;
                head = tempNode;
                prev = nullptr;
            }
            if(curr) tempNode = curr;
            loop++;
        }
        if(curr) head->next = curr;
        return permHead;
    }
};
