import java.util.*;

class Solution {
    public void sortStack(Stack<Integer> st) {
        
        int n = st.size();
        int[] arr = new int[n];

        // Stack -> Array
        for (int i = n - 1; i >= 0; i--) {
            arr[i] = st.pop();
        }

        // Sort the array
        Arrays.sort(arr);

        // Array -> Stack
        for (int i = 0; i < n; i++) {
            st.push(arr[i]);
        }
    }
}