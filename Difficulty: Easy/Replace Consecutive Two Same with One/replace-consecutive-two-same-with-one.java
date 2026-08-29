class Solution {
    public String removeDuplicates(String s) {
        // code here
        StringBuilder r = new StringBuilder();
        int n = s.length();
        int runner = 0;
        r.append(s.charAt(0));
        for(int i=1;i<n;i++){
            if(r.charAt(runner)!=s.charAt(i)){
                r.append(s.charAt(i));
                runner++;
            }
            
        }
        
        
        return r.toString();
    }
}