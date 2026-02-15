// User function Template for Java

class Solution {
    public int findMinDiff(ArrayList<Integer> arr, int m) {
        // your code here
        int length = arr.size();
        Collections.sort(arr);
        int result = Integer.MAX_VALUE;
        for(int i=0;i<length-m+1;i++){
            int minElement = arr.get(i);
            int maxElement = arr.get(m+i-1);
            result = Math.min(result, maxElement - minElement);
            
            
        }
        
        return result ;
        
    }
}