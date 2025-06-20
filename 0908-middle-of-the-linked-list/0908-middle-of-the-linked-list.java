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
    public ListNode middleNode(ListNode head) {
        if( head == null || head.next == null) return head; 
        int l = 0; 
        ListNode temp = head; 
        while( temp!= null){
            l+=1; 
            temp = temp.next; 
        }
        int middle = l/2; 
        temp = head; 

        for( int i = 0; i< middle ; i++){
            temp = temp.next; 
        }
        return temp;
        
    }
}