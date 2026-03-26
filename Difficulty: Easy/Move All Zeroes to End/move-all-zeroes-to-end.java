class Solution {
    void pushZerosToEnd(int[] arr) {
        // code here
        int len = arr.length;
        int[] result = new int[len];
        int run = 0;
        for(int i=0;i<len;i++){
            if(arr[i]!=0){
                result[run]=arr[i];
                run++;
            }
        }
        for(int i=0;i<len;i++){
            arr[i] = result[i];
        }
        
    }
}