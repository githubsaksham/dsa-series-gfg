class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        vector<int> freq(256, 0);

        for (char c : s)
            freq[c]++;

        char ans = 255;
        int maxi = 0;

        for (int i = 0; i < 256; i++) {
            if (freq[i] > maxi) {
                maxi = freq[i];
                ans = char(i);
            }
        }

        return ans;
    }
};