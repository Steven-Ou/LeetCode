
public class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}
class Solution{
    public ListNode addTwoNumbers(ListNode l1, ListNode l2){
        ListNode dum = new ListNode(0);
        ListNode n = dum; 
        int carry =0; 

        while(l1 != null || l2 != null || carry !=0){
            int d1 = (l1!= null) ? l1.val:0; 
            int d2 = (l2!=null) ? l2.val:0;  // If not null turn it into the number, if null = 0. 

            int sum = d1 +d2+ carry; 
            int di = sum%10; 
            carry = sum/10;

            ListNode newNode = new ListNode(di); 
            n.next = newNode;
            n = n.next; 

            l1 = (l1!=null) ? l1.next : null; 
            l2 = (l2!=null)? l2.next : null;
        }
        ListNode result = dum.next;
        dum.next =null;
        return result; 
    }
}