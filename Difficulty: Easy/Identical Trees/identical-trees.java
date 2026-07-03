class Solution {

    public boolean isIdentical(Node r1, Node r2) {

        // Dono null hain
        if (r1 == null && r2 == null)
            return true;

        // Ek null hai aur doosra nahi
        if (r1 == null || r2 == null)
            return false;

        // Data match nahi hua
        if (r1.data != r2.data)
            return false;

        // Left aur Right subtree check karo
        return isIdentical(r1.left, r2.left)
                && isIdentical(r1.right, r2.right);
    }
}