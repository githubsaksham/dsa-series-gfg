class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int length = arr.size();
        for(int i=0;i<length-1;i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }
};