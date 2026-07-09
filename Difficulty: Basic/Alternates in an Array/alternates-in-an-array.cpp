class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        int length = arr.size();
        vector<int> result;
        for(int i=0;i<length;i=i+2){
            result.push_back(arr[i]);
        }
        return result;
        
    }
};