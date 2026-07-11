class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        
        int len = arr.size();
        if(len%2!=0) return arr.at(len/2);
        double result =(arr.at(len/2)+arr.at(len/2 -1))/2.0;
        
        return result;
    }
};