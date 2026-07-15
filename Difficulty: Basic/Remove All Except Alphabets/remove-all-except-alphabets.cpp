class Solution {
  public:
    string removeChars(string &s) {
        string ans = "";

        for (char c : s) {
            if (isalpha(c)) {
                ans += c;
            }
        }

        return ans;
    }
};