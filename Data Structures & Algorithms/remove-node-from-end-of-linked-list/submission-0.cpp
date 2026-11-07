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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr != nullptr) {
            ListNode* tempNext = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tempNext;
        }

        if(n==1) {
            ListNode* toDelete = prev;
            prev = prev->next;
            delete toDelete;
        }
        else {
            ListNode* temp = prev;
            for(int i = 1 ; i < n-1 && temp!=nullptr ; i++) 
                temp = temp->next;
            if(temp != nullptr && temp->next != nullptr) {
                ListNode* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
            }
        }
        
        ListNode* prev2 = nullptr;
        ListNode* curr2 = prev;
        while(curr2 != nullptr) {
            ListNode* tempNext = curr2->next;
            curr2->next = prev2;
            prev2 = curr2;
            curr2 = tempNext;
        }

        return prev2;
    }
};
