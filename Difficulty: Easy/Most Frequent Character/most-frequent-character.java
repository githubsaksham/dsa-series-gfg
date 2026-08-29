class Solution {
    public static char getMaxOccuringChar(String s) {
        // code here
        int n = s.length();
        HashMap<Character,Integer> result = new HashMap<>();
        char ans=' ';
        int count =0;
        
        for(int i=0;i<n;i++){
            char a = s.charAt(i);
            result.put(a,result.getOrDefault(a,0)+1);
            if(count<result.get(a) || (result.get(a)==count && a<ans)){
                ans = a;
                count = result.get(a);
            }
        }
        
        return ans;
        
    }
}