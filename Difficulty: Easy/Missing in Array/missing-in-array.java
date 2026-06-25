class Solution {
    int missingNum(int arr[]) {
        // code here
        int length = arr.length;
        int range = length+1;
        int sum = 0;
        int required_sum = 0; 
        for(int i=0;i<length;i++){
            sum=sum+arr[i];
        }
        for(int i=0;i<=range;i++){
            required_sum+=i;
        }
        return required_sum-sum;
        
    }
}