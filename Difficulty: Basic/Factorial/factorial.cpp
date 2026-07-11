class Solution {
  public:
    int factorial(int n) {
        // code here
        int result = 1;
        for(int i=n;i>=1;i--){
            result*=i;
        }
        
        return result;
    }
};