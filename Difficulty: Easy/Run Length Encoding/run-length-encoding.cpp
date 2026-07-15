class Solution {
  public:
    string encode(string &s) {
        string ans = "";
        int n = s.size();

        for (int i = 0; i < n; i++) {
            int cnt = 1;

            while (i + 1 < n && s[i] == s[i + 1]) {
                cnt++;
                i++;
            }

            ans += s[i];
            ans += to_string(cnt);
        }

        return ans;
    }
};