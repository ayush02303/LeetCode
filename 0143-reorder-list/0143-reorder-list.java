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
    public void reorderList(ListNode head) {
        // find the middle 
        ListNode slow = head; 
        ListNode fast = head; 

        while(fast!= null && fast.next != null){
            slow = slow.next; 
            fast = fast.next.next; 
        }
        // reverse after middle 
        ListNode prev = null; 
        ListNode curr = slow.next; 
        slow.next = null;

        while( curr!= null){
            ListNode next = curr.next; 
            curr.next = prev; 
            prev = curr; 
            curr = next;
        }

        // reorder 
        ListNode first = head; 
        ListNode second = prev;  //since prev indicates our head of reversed linked list 

        while( second!= null){
            ListNode temp1 = first.next; 
            ListNode temp2 = second.next; 

            first.next = second; 
            second.next = temp1; 

            first = temp1; 
            second = temp2;
        }
        
    }
}