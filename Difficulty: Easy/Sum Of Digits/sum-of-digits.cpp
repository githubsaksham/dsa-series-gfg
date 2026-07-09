class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int  num =n;
        int sum = 0 ;
        while(num!=0){
            int digit = num%10;
            sum+=digit;
            num = num/10;
        }
        return  sum;
        
    }
};