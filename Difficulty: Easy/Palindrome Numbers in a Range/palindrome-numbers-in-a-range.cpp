class Solution {
  public:
    vector<int> printPalindromes(int m, int n) {
        // code here
        vector<int> result;
        for(int i=m;i<=n;i++){
            int num =i;
            int rev=0;
            while(num!=0)
            {
                int digit = num%10;
                rev =rev*10+digit;
                num = num/10;
            }
            if(rev==i)
            result.push_back(i);
        }
        
        return result;
    }
};