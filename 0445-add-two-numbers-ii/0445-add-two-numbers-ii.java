/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
          // stack<int>s1,s2;
           Stack<Integer> s1 = new Stack<>();
         Stack<Integer> s2 = new Stack<>();


        while(l1!= null ){
            s1.push(l1.val); 
            l1 = l1.next; 

        } 
        while(l2!= null ){
            s2.push(l2.val); 
            l2 = l2.next;

        }
        int carry = 0;
        ListNode  result = null ; 

        while(!s1.empty() || !s2.empty() || carry >0){
            int a = (!s1.empty()) ? s1.peek() : 0; 
            int b = (!s2.empty()) ? s2.peek() : 0; 

            if(!s1.empty()) s1.pop(); 
            if(!s2.empty()) s2.pop(); 

            int sum = a+b+carry; 

            carry = sum/10; 

            ListNode newnode = new ListNode(sum%10); 
            newnode.next = result; 
            result = newnode;  

        }

        return result;
        
    }
}