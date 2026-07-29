class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int length = arr.size();
        int onecount = 0;
        int zerocount = 0;
        for(int i=0;i<length;i++){
            if(arr[i]==0) zerocount++;
            if(arr[i]==1) onecount++;
        }
        int runner = 0;
        while(runner<zerocount){
            arr[runner] = 0;
            runner++;
        }
        while(runner<(zerocount+onecount)){
            arr[runner] = 1;
            runner++;
        }
        
        
    }
};