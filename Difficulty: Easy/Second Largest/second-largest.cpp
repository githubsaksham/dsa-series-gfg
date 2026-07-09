class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int length = arr.size();
        int max = 0;
        int min = 0;
        for(int i=0;i<length;i++){
            if(arr[i]>max){
                min = max;
                max = arr[i];
            }
            else if(arr[i]>min && arr[i]!=max){
                min = arr[i];
            }
        }
        if(min==0) return -1;
        
        return min;
        
    }
};