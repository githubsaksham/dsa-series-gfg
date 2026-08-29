class Solution {
    String firstAlphabet(String s) {
        // code here
        StringBuilder r = new StringBuilder();
        int n = s.length();
        boolean check = true;
        for(int i=0;i<n;i++){
            if(check){
                r.append(s.charAt(i));
                check=false;
            }
            else if(s.charAt(i)==' ') check = true;
        }
        
        return r.toString();
    }
};