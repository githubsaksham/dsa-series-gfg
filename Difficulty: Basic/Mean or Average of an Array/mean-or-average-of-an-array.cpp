class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int len = arr.size();
        int sum =0;
        for(int i=0;i<len;i++){
            sum+=arr.at(i);
        }
        
        return sum/len;
    }
};