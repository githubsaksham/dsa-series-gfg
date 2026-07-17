class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {

        if (arr.size() == 0)
            return 0;

        sort(arr.begin(), arr.end());

        int count = 1;
        int ans = 1;

        for (int i = 1; i < arr.size(); i++) {

            if (arr[i] == arr[i - 1])
                continue;          // Duplicate ko ignore karo

            else if (arr[i] == arr[i - 1] + 1)
                count++;           // Consecutive number mila

            else
                count = 1;         // Sequence toot gayi

            ans = max(ans, count);
        }

        return ans;
    }
};