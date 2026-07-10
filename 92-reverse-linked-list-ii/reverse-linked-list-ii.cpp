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
    ListNode* reversell(ListNode* head, int count) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (count-- && curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head->next = curr;   
        return prev;         
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right)
            return head;

        ListNode* prev = nullptr;
        ListNode* curr = head;

        int pos = 1;

        while (pos < left) {
            prev = curr;
            curr = curr->next;
            pos++;
        }

        ListNode* newHead = reversell(curr, right - left + 1);

        if (prev)
            prev->next = newHead;
        else
            head = newHead;

        return head;
    }
};