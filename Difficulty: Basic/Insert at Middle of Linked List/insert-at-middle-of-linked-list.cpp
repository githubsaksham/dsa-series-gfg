class Solution {
public:
    Node *insertInMiddle(Node *head, int x) {
        Node* newNode = new Node(x);

        // Empty list
        if (head == nullptr) {
            return newNode;
        }

        Node* slow = head;
        Node* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        newNode->next = slow->next;
        slow->next = newNode;

        return head;
    }
};