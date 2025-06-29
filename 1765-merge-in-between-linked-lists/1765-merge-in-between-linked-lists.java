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
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode before = list1; 
        ListNode after = list1; 

        for( int i = 0 ;i< a-1 ; i++){
            before = before.next; 
        }
        
        for( int i = 0 ; i< b+1 ; i++){
            after = after.next; 
        }
        before.next = list2; 
        ListNode temp = list2; 
        while( temp.next!= null){
            temp = temp.next; 
        }
        temp.next = after; 
        return list1;
        
    }
}