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
    ListNode* sortList(ListNode* head) {
        vector<int>ans; 
        ListNode* curr = head; 
        while( curr!= NULL){
            ans.push_back(curr->val); 
            curr = curr->next; 
        }
        int i =0; 
        sort(ans.begin(), ans.end()); 
        curr = head; 
        while( curr != NULL){
            curr->val = ans[i++]; 
            curr = curr->next; 
        }
        return head; 
    }
};