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
    public ListNode rotateRight(ListNode head, int k) {
        if(head== null || head.next == null || k == 0) return head;
        ListNode temp = head; 
        int length = 1; 
        while( temp.next != null){
            length+=1; 
            temp = temp.next;
        }
        temp.next = head; 

        ListNode temp2 = head; 
        k = k%length; 
        int ans = length-k; 
        for( int i = 0; i<ans-1 ; i++){
            temp2 = temp2.next; 
        }
        ListNode temp3 = temp2.next; 
        temp2.next = null; 
        
        return temp3 ; 
        
    }
}