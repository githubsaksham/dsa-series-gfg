class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        vector<int> result;
        for(int i=2;i<=n;i++){
        bool check =true;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    check = false;
                    break;
                }
            }
            if(check==true) result.push_back(i);
            
        }
        return result;
    }
};