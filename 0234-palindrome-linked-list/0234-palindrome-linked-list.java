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
    public boolean isPalindrome(ListNode head) {
        ListNode temp = head; 
       // stack<int>st; 
       Stack<Integer> stack = new Stack<>();

        while( temp!= null){
            //st.push(temp.val); 
            stack.push(temp.val);
            temp = temp.next; 
        }
        temp = head; 
        while( temp!=null){
            if( temp.val != stack.peek()) return false; 
            stack.pop(); 
            temp =temp.next;
        }
        return true; 
    }
};