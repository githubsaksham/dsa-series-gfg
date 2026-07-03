import java.util.*;

class Solution {

    public boolean isBST(Node root) {

        Stack<Node> st = new Stack<>();
        Node curr = root;
        Integer prev = null;

        while (curr != null || !st.isEmpty()) {

            // Leftmost node tak jao
            while (curr != null) {
                st.push(curr);
                curr = curr.left;
            }

            curr = st.pop();

            // BST check
            if (prev != null && curr.data <= prev)
                return false;

            prev = curr.data;

            // Right subtree
            curr = curr.right;
        }

        return true;
    }
}