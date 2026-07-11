class Solution {
  public:
    int sumOfGP(int n, int a, int r) {
        // code here
        int sum =0;
        for(int i=0;i<n;i++){
            sum+= (a*(pow(r,i)));
        }
        
        return sum;
    }
};