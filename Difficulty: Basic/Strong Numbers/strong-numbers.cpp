class Solution {
  public:
  public:
  
  
     int fact(int n){
         if(n==0) return 1;
         
         return n*fact(n-1);
     }
    bool isStrong(int n) {
        // code here.
        int original = n;
        int sum =0;
        while(n!=0){
            int digit = n%10;
            sum += fact(digit);
            n= n/10;
        }
        
        return sum==original;
    }
};

