class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int len = arr.size();
        for(int i=0;i<len;i++){
            if(arr.at(i)==x) 
              return i;
        }
        
        return  -1;
    }
};