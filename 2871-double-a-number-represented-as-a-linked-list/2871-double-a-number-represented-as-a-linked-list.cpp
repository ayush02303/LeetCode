class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* last = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        
        return last;
        
    }
    
    ListNode* doubleIt(ListNode* head) {
        head = reverseList(head); 
        ListNode* curr = head; 
        ListNode* prev = NULL; 
        int carry = 0; 

        while(curr!= NULL){
            int value = curr->val*2 + carry; 
            int a = value%10; 

            curr->val = a; 

            if( value >= 10) carry = 1; 
            else carry = 0;

            prev = curr; 
            curr = curr->next; 

        }

        if( carry!= 0){
            ListNode* newnode = new ListNode(carry); 
            prev->next = newnode; 
        }
        return reverseList(head);
       
    }
};
