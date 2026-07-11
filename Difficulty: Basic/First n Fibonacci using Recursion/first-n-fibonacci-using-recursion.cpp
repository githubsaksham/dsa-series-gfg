class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> series;
        if(n>=1) series.push_back(0);
        if(n>=2) series.push_back(1);
        
        for(int i=2;i<n;i++){
            series.push_back(series[i-1] + series[i-2]);
        }
        
        return series;
    }
};