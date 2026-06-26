class Solution {
    public boolean isBinary(String s) {
        // code here
        int len = s.length();
        for(int i=0;i<len;i++){
            if(s.charAt(i)!='0' && s.charAt(i)!='1')
            return false;
        }
        return true;
    }
}