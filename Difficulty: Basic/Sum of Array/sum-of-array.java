class Solution {
    public int arraySum(int arr[]) {
        // code here
        int sum = 0 ;
        int length = arr.length;
        for(int i=0;i<length;i++){
            sum += arr[i];
        }
        return sum;
        
    }
}
