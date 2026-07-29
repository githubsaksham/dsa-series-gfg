class Solution {
  public:
  
     bool palindromeChecker(int n ){
         int local = n;
         int reverse = 0;
         while(local!=0){
             int digit = local%10;
             reverse =reverse *10 + digit;
             local =local/10;
         }
         
         return reverse == n ; 
     }
    bool isPalinArray(vector<int> &arr) {
        // code here
        int length = arr.size();
        for(int i=0;i<length ;i++){
            if(palindromeChecker(arr[i])!=true) return false;
        }
        
        return true;
        
    }
};