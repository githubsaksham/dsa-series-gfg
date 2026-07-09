class Solution {
  public:
    int arraySum(vector<int>& arr) {
        // code here
        int length = arr.size();
        int sum=0;
        for(int i=0;i<length;i++){
            sum+=arr.at(i);
        }
        return sum;
    }
};