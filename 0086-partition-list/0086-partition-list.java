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
    public ListNode partition(ListNode head, int x) {
        ListNode smaller = new ListNode(0);
        ListNode larger = new ListNode(0); 

        ListNode a = smaller; 
        ListNode b = larger;

        while( head!= null ){
            if( head.val < x){
                a.next = head; 
                a = a.next; 
            }
            else{
                b.next = head; 
                b = b.next; 
            }
            head = head.next;
        }
        a.next = larger.next; 
        b.next = null ; 
        return smaller.next;


        
    }
}