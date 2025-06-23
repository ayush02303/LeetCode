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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

           int l =0; 
        ListNode* temp = head; 
        while(temp){
            l++; 
            temp = temp->next;
        }
        int a = l/k; 
        int b = l%k;

        vector<ListNode*>ans(k,NULL); 
        temp = head; 
        ListNode* prev = NULL;

        for( int i = 0; temp && i < k ; i++){
            ans[i] = temp; 

            for( int count = 1 ; count<= a + (b > 0 ? 1:0) ; count++ ){
                prev = temp; 
                temp = temp->next;
            }
            prev->next = NULL; 
            b--;
        }
        return ans; 

        
    }
};