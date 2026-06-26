class Solution {
    public String removeCharacter(String s, int pos) {
        // code here
        StringBuilder t = new StringBuilder();
        for(int i = 0;i<s.length();i++){
            if(i!=pos)
              t.append(s.charAt(i));
            
        }
        
        return t.toString();
        
        
    }
}