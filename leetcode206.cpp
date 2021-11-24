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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
        stack<int> s;
        auto it = head;
        while(it){
            s.push(it->val);
            it = it-> next;
        }
        ListNode *ans = new ListNode(s.top());
        s.pop();
        auto it1 = ans;
        while(!s.empty()){
            it1->next = new ListNode(s.top());
            it1 = it1->next;
            s.pop();
        }
        
        return ans;
    }
};
