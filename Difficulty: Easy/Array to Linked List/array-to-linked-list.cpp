/* Linked List Node Structure
class Node {
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

class Solution {
public:
    Node* arrayToList(vector<int>& arr) {
        if (arr.empty()) {
            return nullptr;
        }

        Node* head = new Node(arr[0]);
        Node* current = head;

        for (int i = 1; i < arr.size(); i++) {
            current->next = new Node(arr[i]);
            current = current->next;
        }

        return head;
    }
};