class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int temp = n;
        int temp1= n;
        int sum =0;
        int digits =0;
        while(temp!=0){
            digits++;
            temp=temp/10;
        }
        while(temp1!=0){
            int digit = temp1%10;
            sum+= pow(digit,digits);
            temp1=temp1/10;
        }
        
        return sum==n;
        
    }
};