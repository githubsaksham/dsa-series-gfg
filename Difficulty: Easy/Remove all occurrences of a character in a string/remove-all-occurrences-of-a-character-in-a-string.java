class Solution {
    // Function to remove all occurrences of the character from the string
    public void removeCharacter(StringBuilder s, char c) {
        // code here
        StringBuilder result = new StringBuilder();
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)!=c)
              result.append(s.charAt(i));
        }
        s.setLength(0);
        s.append(result);
    }
}