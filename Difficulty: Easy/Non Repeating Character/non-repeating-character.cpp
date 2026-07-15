class Solution {
  public:
    char nonRepeatingChar(string &s) {
        vector<int> freq(256, 0);

        for (char c : s)
            freq[c]++;

        for (char c : s)
            if (freq[c] == 1)
                return c;

        return '$';
    }
};