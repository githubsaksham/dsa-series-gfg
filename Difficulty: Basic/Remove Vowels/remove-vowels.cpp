class Solution {
  public:
    string removeVowels(string& s) {
        string ans = "";

        for (char c : s) {
            if (c != 'a' && c != 'e' && c != 'i' &&
                c != 'o' && c != 'u' &&
                c != 'A' && c != 'E' && c != 'I' &&
                c != 'O' && c != 'U') {
                ans += c;
            }
        }

        return ans;
    }
};