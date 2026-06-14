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
    int pairSum(ListNode* head) {
        stack<int> s1;
        stack<int> s2;
        int len = 0;
        ListNode* t = head;
        while(t){
            s1.push(t -> val);
            len++;
            t = t -> next;
        }
        for(int i = 0 ; i  < len / 2 ; i++){
            int p = s1.top();
            s2.push(p);
            s1.pop();
        }
        int mx = 0;
        for(int i = 0 ; i  < len / 2 ; i++){
            int auxi = s1.top() + s2.top();
            if( mx < auxi){
                mx = auxi;
            }
            s1.pop();
            s2.pop();
        }
        return mx;
    }
};