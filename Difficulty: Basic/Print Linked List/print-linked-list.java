/*
class Node {
    int data;
    Node next;
    Node(int x) {
        data = x;
        next = null;
    }
}*/

class Solution {
    public ArrayList<Integer> printList(Node head) {
        // code here
        ArrayList<Integer> l = new ArrayList<>();
        while(head!=null){
            l.add(head.data);
            head=head.next;
        }
        return l;
    }
}