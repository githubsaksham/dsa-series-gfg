import java.util.*;

class Solution {
    public ArrayList<Integer> dfs(ArrayList<ArrayList<Integer>> adj) {

        int n = adj.size();

        boolean[] vis = new boolean[n];
        ArrayList<Integer> ans = new ArrayList<>();
        Stack<Integer> st = new Stack<>();

        st.push(0);

        while (!st.isEmpty()) {

            int curr = st.pop();

            if (vis[curr]) {
                continue;
            }

            vis[curr] = true;
            ans.add(curr);

            // Reverse order me add kar rahe hain
            // taaki recursive DFS jaisa traversal order aaye
            for (int i = adj.get(curr).size() - 1; i >= 0; i--) {

                int neigh = adj.get(curr).get(i);

                if (!vis[neigh]) {
                    st.push(neigh);
                }
            }
        }

        return ans;
    }
}