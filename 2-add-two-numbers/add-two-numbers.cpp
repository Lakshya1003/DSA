class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        ListNode* dummy = new ListNode(0);
        ListNode* head = dummy;  
        int c = 0;

        while (l1 && l2) {
            int v = l1->val + l2->val + c;
            c = v / 10;
            v %= 10;

            dummy->next = new ListNode(v);
            dummy = dummy->next;

            l1 = l1->next;   
            l2 = l2->next; 
        }

        while (l1) {
            int v = l1->val + c;
            c = v / 10;
            v %= 10;

            dummy->next = new ListNode(v);
            dummy = dummy->next;

            l1 = l1->next;  
        }

        while (l2) {
            int v = l2->val + c;
            c = v / 10;
            v %= 10;

            dummy->next = new ListNode(v);
            dummy = dummy->next;

            l2 = l2->next;  
        }

        if (c > 0) {
            dummy->next = new ListNode(c);
        }

        return head->next;  
    }
};