class Solution {
    public void reverseArray(int arr[]) {
        // code here
        int length = arr.length;
        // if(length==0 || length==1)
        
        int low = 0;
        int high = length -1;
        
        while(low<high){
            int temp = arr[low];
            arr[low] =arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
        
       
        
        
        
        
    }
}