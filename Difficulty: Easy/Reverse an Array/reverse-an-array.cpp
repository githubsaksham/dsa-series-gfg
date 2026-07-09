class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int length  = arr.size();
        int low = 0;
        int high = length -1;
        while(low<high){
            int swap = arr[low];
            arr[low] = arr[high];
            arr[high]= swap;
            
            low++;
            high--;
        }
    }
};