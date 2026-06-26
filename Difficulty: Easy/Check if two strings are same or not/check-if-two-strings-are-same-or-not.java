class Solution {
    public static boolean areStringsSame(String s1, String s2) {
        // code here
        int len = s1.length();
        int len2=s2.length();
        if(len!=len2) return false;
        for(int i=0;i<len;i++){
            if(s1.charAt(i)!=s2.charAt(i) )
            return false;
        }
        
        return true;
    }
}