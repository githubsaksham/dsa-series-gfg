import java.util.HashSet;

class Solution {
    String firstRepChar(String s) {

        HashSet<Character> set = new HashSet<>();

        for (int i = 0; i < s.length(); i++) {

            if (set.contains(s.charAt(i))) {
                return String.valueOf(s.charAt(i));
            }

            set.add(s.charAt(i));
        }

        return "-1";
    }
}