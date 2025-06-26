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
        vector<int>ans; 
        ListNode* temp = head; 
        while( temp!= NULL){
            ans.push_back(temp->val); 
            temp = temp->next;
        }
        int result;
        int low = 0; 
        int high = ans.size()-1; 

        while( low< high){
            int sum = ans[low]+ ans[high]; 
            result = max(result, sum); 
            low++; 
            high--; 
        }
        return result;
    }
};