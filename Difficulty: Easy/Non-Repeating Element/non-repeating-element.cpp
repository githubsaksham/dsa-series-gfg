class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        unordered_map<int, int> freq;

        // Count frequency of each element
        for (int x : arr) {
            freq[x]++;
        }

        // Find first element with frequency 1
        for (int x : arr) {
            if (freq[x] == 1)
                return x;
        }
        // If no non-repeating element exists
        return 0;  
        }
};