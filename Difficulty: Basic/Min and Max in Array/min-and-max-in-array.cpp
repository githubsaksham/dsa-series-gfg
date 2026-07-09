class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int> result;
        int  length = arr.size();
        int max = arr[0];
        int min = arr[0];
        for(int i=1;i<length;i++){
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        
        }
        result.push_back(min);
        result.push_back(max);
        
        return result;
        
    }
};