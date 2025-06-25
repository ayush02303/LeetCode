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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int count =0; 
        ListNode temp = head; 
        while( temp!= null){
            count+=1; 
            temp = temp.next; 
        }
        if( n == count){
            ListNode newnode = head.next;
            return newnode;
        }
        int value = count-n;
        temp = head; 

        for( int i = 1 ;i< value ; i++){
            temp = temp.next;
        }

       
        temp.next = temp.next.next; 
        //delete nxt; 

        return head; 



        
        
    }
}