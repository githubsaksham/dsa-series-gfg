class Solution {
    public boolean isSorted(int[] arr) {
    int len = arr.length;
    int num = arr[0];
    boolean result = true;
    for(int i = 1; i < len; i++){
    if( num > arr[i] ){
        result = false;
        
    }    
    else{
        
        num = arr[i];
      
    }
    }
    
    
    return result;
    
    
    
    
    
    
        
    }
}