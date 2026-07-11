class Solution {
  public:
  public:
  int factorial(int n )
  {
      if(n==0) return 1;
      
      return n*factorial(n-1);
  }
     bool isStrong(int n) {
        // code here.
        int num =n ;
        int sum=0;
        while(num!=0){
            int digit = num%10;
            sum+=factorial(digit);
            num=num/10;
        }
        
        if(sum==n) return true;
        
        return false;
    }
};
