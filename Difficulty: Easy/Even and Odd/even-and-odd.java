// User function Template for Java

class Solution {
    static void reArrange(int[] arr, int N) {
        // code here
        int[] result = new int[N];
        int evenrun =0;
        int oddRun =1;
        for(int i=0;i<N;i++){
            if(arr[i]%2==0){
                result[evenrun] = arr[i];
                evenrun+=2;
                
            }
            else{
                result[oddRun] = arr[i];
                oddRun+=2;
            }
        }
        
        for(int i=0;i<N;i++){
            arr[i] = result[i];
        }
        
        
    }
};