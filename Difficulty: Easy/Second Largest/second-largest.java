class Solution {
    public int getSecondLargest(int[] arr) {
        // code here
        int len = arr.length;
        int second = 0;
        int largest = 0;
        for(int i=0;i<len ;i++){
            if(arr[i]>largest){
                second = largest;
                largest = arr[i];
            }
            else if(second<arr[i] && arr[i]!=largest){
                second=arr[i];
            }
        }
        if(second==0) return -1;
        
        return second;
    }
}