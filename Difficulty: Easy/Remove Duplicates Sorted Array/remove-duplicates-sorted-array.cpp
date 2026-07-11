class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int len = arr.size();
        vector<int> result;
        
        int i=0;
        for(int j=1;j<len;j++){
            if(arr[i]!=arr[j]){
                i++;
                arr[i] = arr[j];
            }
        }
        for(int j=0;j<=i;j++){
            result.push_back(arr[j]);
        }
        
        return result;
    }
};