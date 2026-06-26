class Solution {
    boolean isPalindrome(String s) {
        // code here
        StringBuilder c= new StringBuilder();
        for(int i=(s.length()-1);i>=0;i--){
            c.append(s.charAt(i));
        }
        
        if((c.toString()).equals(s)) return true;
        
        return false;
        
    }
}