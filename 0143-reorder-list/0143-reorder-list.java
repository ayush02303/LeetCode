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
        //question is a bit on the tough side , amalgamation of multiple concepts

        // step 1 : find the middle 
        ListNode slow = head; 
        ListNode fast = head; 
        while( fast!= null && fast.next != null){
            slow = slow.next; 
            fast = fast.next.next; 

            //if(slow == fast) break;
        }

        // step 2 : reverse 
        ListNode prev = null; 
        ListNode curr = slow.next; //since slow is the middle and we want to reverse
        //the section after the middle 
        slow.next = null;

        while( curr!= null){
            ListNode next = curr.next; 
            curr.next = prev; 
            prev = curr; 
            curr = next;
        }
        // step 3 , merge the list as per requirement

        ListNode first =  head;
        ListNode second = prev ; 

        while(second!= null){
            ListNode temp1 = first.next;
            ListNode temp2 = second.next; 

            first.next = second; 
            second.next = temp1; 

            first = temp1; 
            second = temp2; 
        }

    }
}