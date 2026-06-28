/*
class Node{
    int data;
    Node next;

    Node(int x){
        data = x;
        next = null;
    }
}
*/
class Solution {
    public Node insertAtEnd(Node head, int x) {
        // code here
        Node current = head;
        if(head==null){
            Node t = new Node(x);
            return t;
        }
        while(current.next!=null){
            current=current.next;
        }
        Node s=new Node(x);
        current.next=s;
        
        return head;
        
    }
}