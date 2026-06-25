class Solution {
    public int getSecondLargest(int[] arr) {
        // code here
        int largest=0;
        int smaller=0;
        
        for(int i=0;i<arr.length;i++){
            if(arr[i]>largest){
                smaller=largest;
                largest=arr[i];
            }
            else if(smaller< arr[i] && largest!=arr[i]){
                smaller=arr[i];
            }
            
        }
        if(smaller==0) return -1;
         return smaller;
         
        
    }
}