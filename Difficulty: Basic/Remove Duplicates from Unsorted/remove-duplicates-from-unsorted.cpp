class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        int len = arr.size();
        set<int> s;
        vector<int> result;
        
        for(int i=0;i<len;i++){
            if(s.find(arr[i])==s.end()){
                s.insert(arr[i]);
                result.push_back(arr[i]);
            }
        }
        
        return result;
        
    }
};