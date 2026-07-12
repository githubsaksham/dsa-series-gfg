class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int num =n;
        int digits =0;
        while(num!=0)
        {
            digits++;
            num=num/10;
        }
        int run =n;
        int sum=0;
        while(run!=0){
            int digit = run%10;
            sum+= pow(digit,digits);
            run=run/10;
        }
        
        return sum==n;
    }
};