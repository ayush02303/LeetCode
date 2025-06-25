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
    public ListNode insertionSortList(ListNode head) {
        ListNode temp = head; 
        //vector<int>ans; 
        List<Integer>ans = new ArrayList<>();
        while(temp!= null){
            ans.add(temp.val); 
            temp = temp.next;
        }
        Collections.sort(ans); 
        int i = 0; 
        temp = head; 
        while(temp!= null){
            temp.val = ans.get(i++); 
            temp = temp.next;
        }
        return head;

        
    }
}