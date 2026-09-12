class Solution {
    static String preToInfix(String s) {
        Stack<String> st = new Stack<>();

        for (int i = s.length() - 1; i >= 0; i--) {
            char ch = s.charAt(i);

            if (Character.isLetterOrDigit(ch)) {
                st.push(String.valueOf(ch));
            } 
            else {
                String a = st.pop();
                String b = st.pop();

                st.push("(" + a + ch + b + ")");
            }
        }

        return st.pop();
    }
}