class Solution {
    public String removeSpaces(String s) {
        // code here
        StringBuilder result = new StringBuilder();
        int n = s.length();
        
        for(int i=0;i<n;i++){
            if(s.charAt(i)!=' ')
              result.append(s.charAt(i));
        }
        return result.toString();
        
    }
}