class Solution {
    // Function to search for a character in the string
    public int searchCharacter(String s, char ch) {
        // code here
        int len = s.length();
        for(int i=0;i<len;i++){
            if(s.charAt(i)==ch)
              return i;
        }
        return -1;
    }
}