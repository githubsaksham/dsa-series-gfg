class Solution {
  public:
    int binaryToDecimal(string& b) {
        // code here
        string num =b;
        int base =1;
        int value=0;
        
        int length = b.size();
        for(int i=length-1;i>=0;i--){
            if(num[i]=='1')
                value+=base;
            base = base*2;
        }
        
        return value;
        
        
        
    }
};