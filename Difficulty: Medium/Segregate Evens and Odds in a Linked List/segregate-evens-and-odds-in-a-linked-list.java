/*
class Node {
    int data;
    Node next;

    Node(int data) {
        data = d;
        next = null;
    }
}
*/

class Solution {
    Node divide(Node head) {

        Node evenHead = null;
        Node evenTail = null;
        Node oddHead = null;
        Node oddTail = null;

        Node temp = head;

        while (temp != null) {

            Node nextNode = temp.next;
            temp.next = null;

            if (temp.data % 2 == 0) {

                if (evenHead == null) {
                    evenHead = temp;
                    evenTail = temp;
                } else {
                    evenTail.next = temp;
                    evenTail = temp;
                }

            } else {

                if (oddHead == null) {
                    oddHead = temp;
                    oddTail = temp;
                } else {
                    oddTail.next = temp;
                    oddTail = temp;
                }
            }

            temp = nextNode;
        }

        if (evenHead == null)
            return oddHead;

        evenTail.next = oddHead;

        return evenHead;
    }
}